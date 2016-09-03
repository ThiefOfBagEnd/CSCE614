#pragma once

#include "GateType.h"
#include <string>

class CGate
{
public:
	CGate();
	~CGate();

	void setInput1(CGate* pGate1) { m_pInput1 = pGate1; }
	void setInput2(CGate* pGate2) { m_pInput2 = pGate2; }
	void setGateType(const GateType& eGateType) { m_eGateType = eGateType; }
	void setID(const std::string& strID) { m_strID = strID; }
	void setValue(const bool& bValue);
	const std::string& getGate1() const;
	const std::string& getGate2() const;
	const std::string& getStrGateType() const;
	const GateType getGateType() const { return m_eGateType; }
	const std::string& getID() const { return m_strID; }
	bool output();
protected:
private:
	CGate* m_pInput1;
	CGate* m_pInput2;
	GateType m_eGateType;
	std::string m_strID;
	bool m_bValue;
	bool m_bOuputComputed;
};

