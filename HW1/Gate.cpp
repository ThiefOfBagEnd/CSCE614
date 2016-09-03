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

const std::string& CGate::getGate1() const
{
	std::string strReturn = "";
	if (m_pInput1 != NULL)
	{
		strReturn = m_pInput1->getID();
	}
	return strReturn;
}

const std::string& CGate::getGate2() const
{
	std::string strReturn = "";
	if (m_pInput2 != NULL)
	{
		strReturn = m_pInput2->getID();
	}
	return strReturn;
}

const std::string& CGate::getStrGateType() const
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
