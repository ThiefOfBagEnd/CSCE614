#include "Gate.h"
#include <cassert>



CGate::CGate()
{
	CGate* m_pInput1 = NULL;
	CGate* m_pInput2 = NULL;
	GateType m_eGateType = GateType::UnknownGateType;
	std::string m_strID = "";
	bool m_bOuputComputed = false;
}

CGate::~CGate()
{
	//nothing to do here
}

bool CGate::equals(const CGate* pGate) const
{
	if (pGate == NULL)
	{
		assert(0);
		return false;
	}
	else
	{
		if (m_eGateType == GateType::NOT)
		{
			return (m_eGateType == pGate->m_eGateType && m_pInput1 == pGate->m_pInput1);
		}
		else
		{
			return (m_eGateType == pGate->m_eGateType && m_pInput1 == pGate->m_pInput1 && m_pInput2 == pGate->m_pInput2);
		}
	}
}

bool CGate::equals(std::vector<CGate*>* pvpGates) const
{
	bool bReturn = false;
	const std::vector<CGate*>::const_iterator itBegin = pvpGates->cbegin();
	const std::vector<CGate*>::const_iterator itEnd = pvpGates->cend();
	std::vector<CGate*>::const_iterator itGate = pvpGates->cbegin();
	for (itGate = itBegin; itGate != itEnd && !bReturn; ++itGate)
	{
		bReturn |= equals(*itGate);
	}
	return bReturn;
}

void CGate::setInput1(CGate* pGate1)
{ 
	m_pInput1 = pGate1; 
	m_bOuputComputed = false;
}

void CGate::setInput2(CGate* pGate2)
{ 
	m_pInput2 = pGate2; 
	m_bOuputComputed = false;
}

void CGate::setGateType(const GateType& eGateType)
{ 
	m_eGateType = eGateType; 
	m_bOuputComputed = false;
}

void CGate::setValue(const bool& bValue)
{
	if (m_eGateType == GateType::Constant)
	{
		m_bValue = bValue;
		m_bOuputComputed = true;
	}
	else
	{
		assert(0);
	}
}

std::string CGate::getGate1() const
{
	std::string strReturn = "";
	if (m_pInput1 != NULL)
	{
		strReturn = m_pInput1->getID();
	}
	return strReturn;
}

std::string CGate::getGate2() const
{
	std::string strReturn = "";
	if (m_pInput2 != NULL)
	{
		strReturn = m_pInput2->getID();
	}
	return strReturn;
}

std::string CGate::getStrGateType() const
{
	std::string strGateType = "";
	switch (m_eGateType)
	{
	case GateType::NAND:
		strGateType = "NAND";
		break;
	case GateType::NOR:
		strGateType = "NOR";
		break;
	case GateType::NOT:
		strGateType = "NOT";
		break;
	case GateType::AND:
		strGateType = "AND";
		break;
	case GateType::OR:
		strGateType = "OR";
		break;
	case GateType::XOR:
		strGateType = "XOR";
		break;
	case GateType::Constant:
		strGateType = "Constant/Input";
		break;
	case GateType::UnknownGateType:
	default:
		assert(0);
	}
	return strGateType;
}

bool CGate::output()
{
	if (!m_bOuputComputed)
	{
		m_bOuputComputed = true;
		switch (m_eGateType)
		{
		case GateType::NAND:
			if (m_pInput1 && m_pInput2)
			{
				m_bValue = !(m_pInput1->output() && m_pInput2->output());
			}
			else
			{
				assert(0);
			}
			break;
		case GateType::NOR:
			if (m_pInput1 && m_pInput2)
			{
				m_bValue = !(m_pInput1->output() || m_pInput2->output());
			}
			else
			{
				assert(0);
			}
			break;
		case GateType::NOT:
			if (m_pInput1)
			{
				m_bValue = !(m_pInput1->output());
			}
			else
			{
				assert(0);
			}
			break;
		case GateType::AND:
			if (m_pInput1 && m_pInput2)
			{
				m_bValue = m_pInput1->output() && m_pInput2->output();
			}
			else
			{
				assert(0);
			}
			break;
		case GateType::OR:
			if (m_pInput1 && m_pInput2)
			{
				m_bValue = m_pInput1->output() || m_pInput2->output();
			}
			else
			{
				assert(0);
			}
			break;
		case GateType::XOR:
			if (m_pInput1 && m_pInput2)
			{
				m_bValue = m_pInput1->output() != m_pInput2->output();
			}
			else
			{
				assert(0);
			}
			break;
		case GateType::Constant:
			break;
		case GateType::UnknownGateType:
		default:
			assert(0);
		}
	}
	return m_bValue;
}
