#pragma once

#include "GateType.h"
#include <string>
#include <vector>

class CGate
{
public:
	CGate();
	~CGate();

	void setInput1(CGate* pGate1);
	void setInput2(CGate* pGate2);
	void setGateType(const GateType& eGateType);
	void setID(const std::string& strID) { m_strID = strID; }
	void setValue(const bool& bValue);
	std::string getGate1() const;
	std::string getGate2() const;
	std::string getStrGateType() const;
	bool equals(const CGate* pGate) const;
	bool equals(std::vector<CGate*>* pvpGates) const;
	GateType getGateType() const { return m_eGateType; }
	std::string getID() const { return m_strID; }
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

