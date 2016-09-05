#include "Gate.h"
#include "GateType.h"
#include <vector>
#include <iostream>

CGate* pInput1;
CGate* pInput2;
CGate* pInput3;
CGate* pInput4;
CGate* pGate1;
CGate* pGate2;
CGate* pGate3;
CGate* pGate4;
CGate* pGate5;
CGate* pGate6;
CGate* pGate7;
std::vector<std::vector<bool> > vvbTruthTable;

bool testCircuit()
{
	size_t uiNumRows = vvbTruthTable.size();
	std::vector<bool> vbTTRow;
	bool bSuccess = false;
	int i = 0;
	unsigned int k = 0;
	for (k = 0; k < uiNumRows; ++k)
	{
		vbTTRow = vvbTruthTable[k];
		pInput1->setValue(vbTTRow[0]);
		pInput2->setValue(vbTTRow[1]);
		pInput3->setValue(vbTTRow[2]);
		pInput4->setValue(vbTTRow[3]);
		if (pGate7->output() != vbTTRow[4])
		{
			bSuccess = false;
			break;
		}
		bSuccess = true;
	}
	if (bSuccess)
	{
		std::cerr << "Gate 1: " + pGate1->getGate1() + pGate1->getStrGateType() + ((pGate1->getGateType() == GateType::NOT) ? "" : pGate1->getGate2()) << std::endl;
		std::cerr << "Gate 2: " + pGate2->getGate1() + pGate2->getStrGateType() + ((pGate2->getGateType() == GateType::NOT) ? "" : pGate2->getGate2()) << std::endl;
		std::cerr << "Gate 3: " + pGate3->getGate1() + pGate3->getStrGateType() + ((pGate3->getGateType() == GateType::NOT) ? "" : pGate3->getGate2()) << std::endl;
		std::cerr << "Gate 4: " + pGate4->getGate1() + pGate4->getStrGateType() + ((pGate4->getGateType() == GateType::NOT) ? "" : pGate4->getGate2()) << std::endl;
		std::cerr << "Gate 5: " + pGate5->getGate1() + pGate5->getStrGateType() + ((pGate5->getGateType() == GateType::NOT) ? "" : pGate5->getGate2()) << std::endl;
		std::cerr << "Gate 6: " + pGate6->getGate1() + pGate6->getStrGateType() + ((pGate6->getGateType() == GateType::NOT) ? "" : pGate6->getGate2()) << std::endl;
		std::cerr << "Gate 7: " + pGate7->getGate1() + pGate7->getStrGateType() + ((pGate7->getGateType() == GateType::NOT) ? "" : pGate7->getGate2()) << std::endl;
		std::cin >> i;
	}
	return bSuccess;
}

void prepareTT()
{
	std::vector<bool> row1, row2, row3, row4, row5, row6, row7, row8, row9, row10, row11, row12, row13, row14, row15, row16;
	//column 1
	row1.push_back(false);
	row2.push_back(false);
	row3.push_back(false);
	row4.push_back(false);
	row5.push_back(false);
	row6.push_back(false);
	row7.push_back(false);
	row8.push_back(false);
	row9.push_back(true);
	row10.push_back(true);
	row11.push_back(true);
	row12.push_back(true);
	row13.push_back(true);
	row14.push_back(true);
	row15.push_back(true);
	row16.push_back(true);
	//column 2
	row1.push_back(false);
	row2.push_back(false);
	row3.push_back(false);
	row4.push_back(false);
	row5.push_back(true);
	row6.push_back(true);
	row7.push_back(true);
	row8.push_back(true);
	row9.push_back(false);
	row10.push_back(false);
	row11.push_back(false);
	row12.push_back(false);
	row13.push_back(true);
	row14.push_back(true);
	row15.push_back(true);
	row16.push_back(true);
	//column 3
	row1.push_back(false);
	row2.push_back(false);
	row3.push_back(true);
	row4.push_back(true);
	row5.push_back(false);
	row6.push_back(false);
	row7.push_back(true);
	row8.push_back(true);
	row9.push_back(false);
	row10.push_back(false);
	row11.push_back(true);
	row12.push_back(true);
	row13.push_back(false);
	row14.push_back(false);
	row15.push_back(true);
	row16.push_back(true);
	//column 4
	row1.push_back(false);
	row2.push_back(true);
	row3.push_back(false);
	row4.push_back(true);
	row5.push_back(false);
	row6.push_back(true);
	row7.push_back(false);
	row8.push_back(true);
	row9.push_back(false);
	row10.push_back(true);
	row11.push_back(false);
	row12.push_back(true);
	row13.push_back(false);
	row14.push_back(true);
	row15.push_back(false);
	row16.push_back(true);
	//column 5-results
	row1.push_back(false);
	row2.push_back(false);
	row3.push_back(true);
	row4.push_back(true);
	row5.push_back(false);
	row6.push_back(true);
	row7.push_back(true);
	row8.push_back(false);
	row9.push_back(true);
	row10.push_back(true);
	row11.push_back(false);
	row12.push_back(true);
	row13.push_back(false);
	row14.push_back(false);
	row15.push_back(false);
	row16.push_back(false);

	vvbTruthTable.push_back(row1);
	vvbTruthTable.push_back(row2);
	vvbTruthTable.push_back(row3);
	vvbTruthTable.push_back(row4);
	vvbTruthTable.push_back(row5);
	vvbTruthTable.push_back(row6);
	vvbTruthTable.push_back(row7);
	vvbTruthTable.push_back(row8);
	vvbTruthTable.push_back(row9);
	vvbTruthTable.push_back(row10);
	vvbTruthTable.push_back(row11);
	vvbTruthTable.push_back(row12);
	vvbTruthTable.push_back(row13);
	vvbTruthTable.push_back(row14);
	vvbTruthTable.push_back(row15);
	vvbTruthTable.push_back(row16);
}

int main()
{
	prepareTT();
	std::vector<std::vector<CGate*> > vvpEqualsGates;
	std::vector<CGate*> equalsGates2, equalsGates3, equalsGates4, equalsGates5, equalsGates6, equalsGates7;
	unsigned int g1 = 0;
	unsigned int g2 = 0;
	unsigned int g3 = 0;
	unsigned int g4 = 0;
	unsigned int g5 = 0;
	unsigned int g6 = 0;
	unsigned int g7 = 0;
	unsigned int i1 = 0;
	unsigned int i2 = 0;
	unsigned int i3 = 0;
	unsigned int i4 = 0;
	unsigned int i5 = 0;
	unsigned int i6 = 0;
	unsigned int i7 = 0;
	unsigned int j1 = 0;
	unsigned int j2 = 0;
	unsigned int j3 = 0;
	unsigned int j4 = 0;
	unsigned int j5 = 0;
	unsigned int j6 = 0;
	unsigned int j7 = 0;
	pInput1 = new CGate();
	pInput2 = new CGate();
	pInput3 = new CGate();
	pInput4 = new CGate();
	pInput1->setGateType(GateType::Constant);
	pInput2->setGateType(GateType::Constant);
	pInput3->setGateType(GateType::Constant);
	pInput4->setGateType(GateType::Constant);
	pInput1->setID("Input1");
	pInput2->setID("Input2");
	pInput3->setID("Input3");
	pInput4->setID("Input4");
	pGate1 = new CGate();
	pGate2 = new CGate();
	pGate3 = new CGate();
	pGate4 = new CGate();
	pGate5 = new CGate();
	pGate6 = new CGate();
	pGate7 = new CGate();
	pGate1->setID("Gate1");
	pGate2->setID("Gate2");
	pGate3->setID("Gate3");
	pGate4->setID("Gate4");
	pGate5->setID("Gate5");
	pGate6->setID("Gate6");
	pGate7->setID("Gate7");
	std::vector<CGate*> vpInputGates;
	vpInputGates.push_back(pInput1);
	vpInputGates.push_back(pInput2);
	vpInputGates.push_back(pInput3);
	vpInputGates.push_back(pInput4);
	vpInputGates.push_back(pGate1);
	equalsGates2.push_back(pGate1);
	equalsGates3.push_back(pGate1);
	equalsGates4.push_back(pGate1);
	equalsGates5.push_back(pGate1);
	equalsGates6.push_back(pGate1);
	equalsGates7.push_back(pGate1);
	vpInputGates.push_back(pGate2);
	equalsGates3.push_back(pGate2);
	equalsGates4.push_back(pGate2);
	equalsGates5.push_back(pGate2);
	equalsGates6.push_back(pGate2);
	equalsGates7.push_back(pGate2);
	vpInputGates.push_back(pGate3);
	equalsGates4.push_back(pGate3);
	equalsGates5.push_back(pGate3);
	equalsGates6.push_back(pGate3);
	equalsGates7.push_back(pGate3);
	vpInputGates.push_back(pGate4);
	equalsGates5.push_back(pGate4);
	equalsGates6.push_back(pGate4);
	equalsGates7.push_back(pGate4);
	vpInputGates.push_back(pGate5);
	equalsGates6.push_back(pGate5);
	equalsGates7.push_back(pGate5);
	vpInputGates.push_back(pGate6);
	equalsGates7.push_back(pGate6);
	vvpEqualsGates.push_back(std::vector<CGate*>());
	vvpEqualsGates.push_back(std::vector<CGate*>());
	vvpEqualsGates.push_back(equalsGates2);
	vvpEqualsGates.push_back(equalsGates3);
	vvpEqualsGates.push_back(equalsGates4);
	vvpEqualsGates.push_back(equalsGates5);
	vvpEqualsGates.push_back(equalsGates6);
	vvpEqualsGates.push_back(equalsGates7);

	//loop over gate 1 types
	for (g1 = 1; g1 <= 6; ++g1)
	{
		pGate1->setGateType(GateType(g1));
		std::cerr << "Gate1: " << pGate1->getStrGateType() << std::endl;
		//loop over gate 2 types
		for (g2 = 1; g2 <= 6; ++g2)
		{
			pGate2->setGateType(GateType(g2));
			std::cerr << "Gate2: " << pGate2->getStrGateType() << std::endl;
			//loop over gate 3 types
			for (g3 = 1; g3 <= 6; ++g3)
			{
				pGate3->setGateType(GateType(g3));
				std::cerr << "Gate3: " << pGate3->getStrGateType() << std::endl;
				//loop over gate 4 types
				for (g4 = 1; g4 <= 6; ++g4)
				{
					pGate4->setGateType(GateType(g4));
					std::cerr << "Gate4: " << pGate4->getStrGateType() << std::endl;
					//loop over gate 5 types
					for (g5 = 1; g5 <= 6; ++g5)
					{
						pGate5->setGateType(GateType(g5));
						std::cerr << "Gate5: " << pGate5->getStrGateType() << std::endl;
						//loop over gate 6 types
						for (g6 = 1; g6 <= 6; ++g6)
						{
							pGate6->setGateType(GateType(g6));
							std::cerr << "Gate6: " << pGate6->getStrGateType() << std::endl;
							//loop over gate 7 types
							for (g7 = 1; g7 <= 6; ++g7)
							{
								pGate7->setGateType(GateType(g7));
								std::cerr << "Gate7: " << pGate7->getStrGateType() << std::endl;
								if (pGate1->getGateType() != GateType::NOT)
								{
									for (i1 = 0; i1 < 4; ++i1)
									{
										pGate1->setInput1(vpInputGates[i1]);
										for (j1 = i1 + 1; j1 < 4; ++j1)
										{
											pGate1->setInput2(vpInputGates[j1]);
											if (pGate2->getGateType() != GateType::NOT)
											{
												for (i2 = 0; i2 < 5; ++i2)
												{
													pGate2->setInput1(vpInputGates[i2]);
													for (j2 = i2 + 1; j2 < 5; ++j2)
													{
														pGate2->setInput2(vpInputGates[j2]);
														if (pGate2->equals(&vvpEqualsGates[2]))
														{
															//do nothing
														}
														else if (pGate3->getGateType() != GateType::NOT)
														{
															for (i3 = 0; i3 < 6; ++i3)
															{
																pGate3->setInput1(vpInputGates[i3]);
																for (j3 = i3 + 1; j3 < 6; ++j3)
																{
																	pGate3->setInput2(vpInputGates[j3]);
																	if (pGate3->equals(&vvpEqualsGates[3]))
																	{
																		//do nothing	
																	}
																	else if (pGate4->getGateType() != GateType::NOT)
																	{
																		for (i4 = 0; i4 < 7; ++i4)
																		{
																			pGate4->setInput1(vpInputGates[i4]);
																			for (j4 = i4 + 1; j4 < 7; ++j4)
																			{
																				pGate4->setInput2(vpInputGates[j4]);
																				if (pGate4->equals(&vvpEqualsGates[4]))
																				{
																					//do nothing
																				}
																				else if (pGate5->getGateType() != GateType::NOT)
																				{
																					for (i5 = 0; i5 < 8; ++i5)
																					{
																						pGate5->setInput1(vpInputGates[i5]);
																						for (j5 = i5 + 1; j5 < 8; ++j5)
																						{
																							pGate5->setInput2(vpInputGates[j5]);
																							if (pGate5->equals(&vvpEqualsGates[5]))
																							{
																								//do nothing
																							}
																							else if (pGate6->getGateType() != GateType::NOT)
																							{
																								for (i6 = 0; i6 < 9; ++i6)
																								{
																									pGate6->setInput1(vpInputGates[i6]);
																									for (j6 = i6 + 1; j6 < 9; ++j6)
																									{
																										pGate6->setInput2(vpInputGates[j6]);
																										if (pGate6->equals(&vvpEqualsGates[6]))
																										{
																											//do nothing
																										}
																										else if (pGate7->getGateType() != GateType::NOT)
																										{
																											for (i7 = 0; i7 < 10; ++i7)
																											{
																												pGate7->setInput1(vpInputGates[i7]);
																												for (j7 = i7 + 1; j7 < 10; ++j7)
																												{
																													pGate7->setInput2(vpInputGates[j7]);
																													if (pGate7->equals(&vvpEqualsGates[7]))
																													{
																														//do nothing
																													}
																													else
																													{
																														if (testCircuit())
																														{
																															return 0;
																														}
																													}
																												}
																											}
																										}
																										else
																										{
																											for (i7 = 0; i7 < 10; ++i7)
																											{
																												pGate7->setInput1(vpInputGates[i7]);
																												if (pGate7->equals(&vvpEqualsGates[7]))
																												{
																													//do nothing
																												}
																												else
																												{
																													if (testCircuit())
																													{
																														return 0;
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i6 = 0; i6 < 9; ++i6)
																								{
																									pGate6->setInput1(vpInputGates[i6]);
																									if (pGate6->equals(&vvpEqualsGates[6]))
																									{
																										//do nothing
																									}
																									else if (pGate7->getGateType() != GateType::NOT)
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											for (j7 = i7 + 1; j7 < 10; ++j7)
																											{
																												pGate7->setInput2(vpInputGates[j7]);
																												if (pGate7->equals(&vvpEqualsGates[7]))
																												{
																													//do nothing
																												}
																												else
																												{
																													if (testCircuit())
																													{
																														return 0;
																													}
																												}
																											}
																										}
																									}
																									else
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i5 = 0; i5 < 8; ++i5)
																					{
																						pGate5->setInput1(vpInputGates[i5]);
																						if (pGate5->equals(&vvpEqualsGates[5]))
																						{
																							//do nothing
																						}
																						else if (pGate6->getGateType() != GateType::NOT)
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								for (j6 = i6 + 1; j6 < 9; ++j6)
																								{
																									pGate6->setInput2(vpInputGates[j6]);
																									if (pGate6->equals(&vvpEqualsGates[6]))
																									{
																										//do nothing
																									}
																									else if (pGate7->getGateType() != GateType::NOT)
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											for (j7 = i7 + 1; j7 < 10; ++j7)
																											{
																												pGate7->setInput2(vpInputGates[j7]);
																												if (pGate7->equals(&vvpEqualsGates[7]))
																												{
																													//do nothing
																												}
																												else
																												{
																													if (testCircuit())
																													{
																														return 0;
																													}
																												}
																											}
																										}
																									}
																									else
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		for (i4 = 0; i4 < 7; ++i4)
																		{
																			pGate4->setInput1(vpInputGates[i4]);
																			if (pGate4->equals(&vvpEqualsGates[4]))
																			{
																				//do nothing
																			}
																			else if (pGate5->getGateType() != GateType::NOT)
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					for (j5 = i5 + 1; j5 < 8; ++j5)
																					{
																						pGate5->setInput2(vpInputGates[j5]);
																						if (pGate5->equals(&vvpEqualsGates[5]))
																						{
																							//do nothing
																						}
																						else if (pGate6->getGateType() != GateType::NOT)
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								for (j6 = i6 + 1; j6 < 9; ++j6)
																								{
																									pGate6->setInput2(vpInputGates[j6]);
																									if (pGate6->equals(&vvpEqualsGates[6]))
																									{
																										//do nothing
																									}
																									else if (pGate7->getGateType() != GateType::NOT)
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											for (j7 = i7 + 1; j7 < 10; ++j7)
																											{
																												pGate7->setInput2(vpInputGates[j7]);
																												if (pGate7->equals(&vvpEqualsGates[7]))
																												{
																													//do nothing
																												}
																												else
																												{
																													if (testCircuit())
																													{
																														return 0;
																													}
																												}
																											}
																										}
																									}
																									else
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
														else
														{
															for (i3 = 0; i3 < 6; ++i3)
															{
																pGate3->setInput1(vpInputGates[i3]);
																if (pGate3->equals(&vvpEqualsGates[3]))
																{
																	//do nothing	
																}
																else if (pGate4->getGateType() != GateType::NOT)
																{
																	for (i4 = 0; i4 < 7; ++i4)
																	{
																		pGate4->setInput1(vpInputGates[i4]);
																		for (j4 = i4 + 1; j4 < 7; ++j4)
																		{
																			pGate4->setInput2(vpInputGates[j4]);
																			if (pGate4->equals(&vvpEqualsGates[4]))
																			{
																				//do nothing
																			}
																			else if (pGate5->getGateType() != GateType::NOT)
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					for (j5 = i5 + 1; j5 < 8; ++j5)
																					{
																						pGate5->setInput2(vpInputGates[j5]);
																						if (pGate5->equals(&vvpEqualsGates[5]))
																						{
																							//do nothing
																						}
																						else if (pGate6->getGateType() != GateType::NOT)
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								for (j6 = i6 + 1; j6 < 9; ++j6)
																								{
																									pGate6->setInput2(vpInputGates[j6]);
																									if (pGate6->equals(&vvpEqualsGates[6]))
																									{
																										//do nothing
																									}
																									else if (pGate7->getGateType() != GateType::NOT)
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											for (j7 = i7 + 1; j7 < 10; ++j7)
																											{
																												pGate7->setInput2(vpInputGates[j7]);
																												if (pGate7->equals(&vvpEqualsGates[7]))
																												{
																													//do nothing
																												}
																												else
																												{
																													if (testCircuit())
																													{
																														return 0;
																													}
																												}
																											}
																										}
																									}
																									else
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
																else
																{
																	for (i4 = 0; i4 < 7; ++i4)
																	{
																		pGate4->setInput1(vpInputGates[i4]);
																		if (pGate4->equals(&vvpEqualsGates[4]))
																		{
																			//do nothing
																		}
																		else if (pGate5->getGateType() != GateType::NOT)
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				for (j5 = i5 + 1; j5 < 8; ++j5)
																				{
																					pGate5->setInput2(vpInputGates[j5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
											else
											{
												for (i2 = 0; i2 < 5; ++i2)
												{
													pGate2->setInput1(vpInputGates[i2]);
													if (pGate2->equals(&vvpEqualsGates[2]))
													{
														//do nothing
													}
													else if (pGate3->getGateType() != GateType::NOT)
													{
														for (i3 = 0; i3 < 6; ++i3)
														{
															pGate3->setInput1(vpInputGates[i3]);
															for (j3 = i3 + 1; j3 < 6; ++j3)
															{
																pGate3->setInput2(vpInputGates[j3]);
																if (pGate3->equals(&vvpEqualsGates[3]))
																{
																	//do nothing	
																}
																else if (pGate4->getGateType() != GateType::NOT)
																{
																	for (i4 = 0; i4 < 7; ++i4)
																	{
																		pGate4->setInput1(vpInputGates[i4]);
																		for (j4 = i4 + 1; j4 < 7; ++j4)
																		{
																			pGate4->setInput2(vpInputGates[j4]);
																			if (pGate4->equals(&vvpEqualsGates[4]))
																			{
																				//do nothing
																			}
																			else if (pGate5->getGateType() != GateType::NOT)
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					for (j5 = i5 + 1; j5 < 8; ++j5)
																					{
																						pGate5->setInput2(vpInputGates[j5]);
																						if (pGate5->equals(&vvpEqualsGates[5]))
																						{
																							//do nothing
																						}
																						else if (pGate6->getGateType() != GateType::NOT)
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								for (j6 = i6 + 1; j6 < 9; ++j6)
																								{
																									pGate6->setInput2(vpInputGates[j6]);
																									if (pGate6->equals(&vvpEqualsGates[6]))
																									{
																										//do nothing
																									}
																									else if (pGate7->getGateType() != GateType::NOT)
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											for (j7 = i7 + 1; j7 < 10; ++j7)
																											{
																												pGate7->setInput2(vpInputGates[j7]);
																												if (pGate7->equals(&vvpEqualsGates[7]))
																												{
																													//do nothing
																												}
																												else
																												{
																													if (testCircuit())
																													{
																														return 0;
																													}
																												}
																											}
																										}
																									}
																									else
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
																else
																{
																	for (i4 = 0; i4 < 7; ++i4)
																	{
																		pGate4->setInput1(vpInputGates[i4]);
																		if (pGate4->equals(&vvpEqualsGates[4]))
																		{
																			//do nothing
																		}
																		else if (pGate5->getGateType() != GateType::NOT)
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				for (j5 = i5 + 1; j5 < 8; ++j5)
																				{
																					pGate5->setInput2(vpInputGates[j5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
													else
													{
														for (i3 = 0; i3 < 6; ++i3)
														{
															pGate3->setInput1(vpInputGates[i3]);
															if (pGate3->equals(&vvpEqualsGates[3]))
															{
																//do nothing	
															}
															else if (pGate4->getGateType() != GateType::NOT)
															{
																for (i4 = 0; i4 < 7; ++i4)
																{
																	pGate4->setInput1(vpInputGates[i4]);
																	for (j4 = i4 + 1; j4 < 7; ++j4)
																	{
																		pGate4->setInput2(vpInputGates[j4]);
																		if (pGate4->equals(&vvpEqualsGates[4]))
																		{
																			//do nothing
																		}
																		else if (pGate5->getGateType() != GateType::NOT)
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				for (j5 = i5 + 1; j5 < 8; ++j5)
																				{
																					pGate5->setInput2(vpInputGates[j5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
															else
															{
																for (i4 = 0; i4 < 7; ++i4)
																{
																	pGate4->setInput1(vpInputGates[i4]);
																	if (pGate4->equals(&vvpEqualsGates[4]))
																	{
																		//do nothing
																	}
																	else if (pGate5->getGateType() != GateType::NOT)
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			for (j5 = i5 + 1; j5 < 8; ++j5)
																			{
																				pGate5->setInput2(vpInputGates[j5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			if (pGate5->equals(&vvpEqualsGates[5]))
																			{
																				//do nothing
																			}
																			else if (pGate6->getGateType() != GateType::NOT)
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					for (j6 = i6 + 1; j6 < 9; ++j6)
																					{
																						pGate6->setInput2(vpInputGates[j6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					if (pGate6->equals(&vvpEqualsGates[6]))
																					{
																						//do nothing
																					}
																					else if (pGate7->getGateType() != GateType::NOT)
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							for (j7 = i7 + 1; j7 < 10; ++j7)
																							{
																								pGate7->setInput2(vpInputGates[j7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							if (pGate7->equals(&vvpEqualsGates[7]))
																							{
																								//do nothing
																							}
																							else
																							{
																								if (testCircuit())
																								{
																									return 0;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									for (i1 = 0; i1 < 4; ++i1)
									{
										pGate1->setInput1(vpInputGates[i1]);
										if (pGate2->getGateType() != GateType::NOT)
										{
											for (i2 = 0; i2 < 5; ++i2)
											{
												pGate2->setInput1(vpInputGates[i2]);
												for (j2 = i2 + 1; j2 < 5; ++j2)
												{
													pGate2->setInput2(vpInputGates[j2]);
													if (pGate2->equals(&vvpEqualsGates[2]))
													{
														//do nothing
													}
													else if (pGate3->getGateType() != GateType::NOT)
													{
														for (i3 = 0; i3 < 6; ++i3)
														{
															pGate3->setInput1(vpInputGates[i3]);
															for (j3 = i3 + 1; j3 < 6; ++j3)
															{
																pGate3->setInput2(vpInputGates[j3]);
																if (pGate3->equals(&vvpEqualsGates[3]))
																{
																	//do nothing	
																}
																else if (pGate4->getGateType() != GateType::NOT)
																{
																	for (i4 = 0; i4 < 7; ++i4)
																	{
																		pGate4->setInput1(vpInputGates[i4]);
																		for (j4 = i4 + 1; j4 < 7; ++j4)
																		{
																			pGate4->setInput2(vpInputGates[j4]);
																			if (pGate4->equals(&vvpEqualsGates[4]))
																			{
																				//do nothing
																			}
																			else if (pGate5->getGateType() != GateType::NOT)
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					for (j5 = i5 + 1; j5 < 8; ++j5)
																					{
																						pGate5->setInput2(vpInputGates[j5]);
																						if (pGate5->equals(&vvpEqualsGates[5]))
																						{
																							//do nothing
																						}
																						else if (pGate6->getGateType() != GateType::NOT)
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								for (j6 = i6 + 1; j6 < 9; ++j6)
																								{
																									pGate6->setInput2(vpInputGates[j6]);
																									if (pGate6->equals(&vvpEqualsGates[6]))
																									{
																										//do nothing
																									}
																									else if (pGate7->getGateType() != GateType::NOT)
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											for (j7 = i7 + 1; j7 < 10; ++j7)
																											{
																												pGate7->setInput2(vpInputGates[j7]);
																												if (pGate7->equals(&vvpEqualsGates[7]))
																												{
																													//do nothing
																												}
																												else
																												{
																													if (testCircuit())
																													{
																														return 0;
																													}
																												}
																											}
																										}
																									}
																									else
																									{
																										for (i7 = 0; i7 < 10; ++i7)
																										{
																											pGate7->setInput1(vpInputGates[i7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i6 = 0; i6 < 9; ++i6)
																							{
																								pGate6->setInput1(vpInputGates[i6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i5 = 0; i5 < 8; ++i5)
																				{
																					pGate5->setInput1(vpInputGates[i5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
																else
																{
																	for (i4 = 0; i4 < 7; ++i4)
																	{
																		pGate4->setInput1(vpInputGates[i4]);
																		if (pGate4->equals(&vvpEqualsGates[4]))
																		{
																			//do nothing
																		}
																		else if (pGate5->getGateType() != GateType::NOT)
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				for (j5 = i5 + 1; j5 < 8; ++j5)
																				{
																					pGate5->setInput2(vpInputGates[j5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
													else
													{
														for (i3 = 0; i3 < 6; ++i3)
														{
															pGate3->setInput1(vpInputGates[i3]);
															if (pGate3->equals(&vvpEqualsGates[3]))
															{
																//do nothing	
															}
															else if (pGate4->getGateType() != GateType::NOT)
															{
																for (i4 = 0; i4 < 7; ++i4)
																{
																	pGate4->setInput1(vpInputGates[i4]);
																	for (j4 = i4 + 1; j4 < 7; ++j4)
																	{
																		pGate4->setInput2(vpInputGates[j4]);
																		if (pGate4->equals(&vvpEqualsGates[4]))
																		{
																			//do nothing
																		}
																		else if (pGate5->getGateType() != GateType::NOT)
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				for (j5 = i5 + 1; j5 < 8; ++j5)
																				{
																					pGate5->setInput2(vpInputGates[j5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
															else
															{
																for (i4 = 0; i4 < 7; ++i4)
																{
																	pGate4->setInput1(vpInputGates[i4]);
																	if (pGate4->equals(&vvpEqualsGates[4]))
																	{
																		//do nothing
																	}
																	else if (pGate5->getGateType() != GateType::NOT)
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			for (j5 = i5 + 1; j5 < 8; ++j5)
																			{
																				pGate5->setInput2(vpInputGates[j5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			if (pGate5->equals(&vvpEqualsGates[5]))
																			{
																				//do nothing
																			}
																			else if (pGate6->getGateType() != GateType::NOT)
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					for (j6 = i6 + 1; j6 < 9; ++j6)
																					{
																						pGate6->setInput2(vpInputGates[j6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					if (pGate6->equals(&vvpEqualsGates[6]))
																					{
																						//do nothing
																					}
																					else if (pGate7->getGateType() != GateType::NOT)
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							for (j7 = i7 + 1; j7 < 10; ++j7)
																							{
																								pGate7->setInput2(vpInputGates[j7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							if (pGate7->equals(&vvpEqualsGates[7]))
																							{
																								//do nothing
																							}
																							else
																							{
																								if (testCircuit())
																								{
																									return 0;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										else
										{
											for (i2 = 0; i2 < 5; ++i2)
											{
												pGate2->setInput1(vpInputGates[i2]);
												if (pGate2->equals(&vvpEqualsGates[2]))
												{
													//do nothing
												}
												else if (pGate3->getGateType() != GateType::NOT)
												{
													for (i3 = 0; i3 < 6; ++i3)
													{
														pGate3->setInput1(vpInputGates[i3]);
														for (j3 = i3 + 1; j3 < 6; ++j3)
														{
															pGate3->setInput2(vpInputGates[j3]);
															if (pGate3->equals(&vvpEqualsGates[3]))
															{
																//do nothing	
															}
															else if (pGate4->getGateType() != GateType::NOT)
															{
																for (i4 = 0; i4 < 7; ++i4)
																{
																	pGate4->setInput1(vpInputGates[i4]);
																	for (j4 = i4 + 1; j4 < 7; ++j4)
																	{
																		pGate4->setInput2(vpInputGates[j4]);
																		if (pGate4->equals(&vvpEqualsGates[4]))
																		{
																			//do nothing
																		}
																		else if (pGate5->getGateType() != GateType::NOT)
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				for (j5 = i5 + 1; j5 < 8; ++j5)
																				{
																					pGate5->setInput2(vpInputGates[j5]);
																					if (pGate5->equals(&vvpEqualsGates[5]))
																					{
																						//do nothing
																					}
																					else if (pGate6->getGateType() != GateType::NOT)
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							for (j6 = i6 + 1; j6 < 9; ++j6)
																							{
																								pGate6->setInput2(vpInputGates[j6]);
																								if (pGate6->equals(&vvpEqualsGates[6]))
																								{
																									//do nothing
																								}
																								else if (pGate7->getGateType() != GateType::NOT)
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										for (j7 = i7 + 1; j7 < 10; ++j7)
																										{
																											pGate7->setInput2(vpInputGates[j7]);
																											if (pGate7->equals(&vvpEqualsGates[7]))
																											{
																												//do nothing
																											}
																											else
																											{
																												if (testCircuit())
																												{
																													return 0;
																												}
																											}
																										}
																									}
																								}
																								else
																								{
																									for (i7 = 0; i7 < 10; ++i7)
																									{
																										pGate7->setInput1(vpInputGates[i7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i6 = 0; i6 < 9; ++i6)
																						{
																							pGate6->setInput1(vpInputGates[i6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			for (i5 = 0; i5 < 8; ++i5)
																			{
																				pGate5->setInput1(vpInputGates[i5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
															else
															{
																for (i4 = 0; i4 < 7; ++i4)
																{
																	pGate4->setInput1(vpInputGates[i4]);
																	if (pGate4->equals(&vvpEqualsGates[4]))
																	{
																		//do nothing
																	}
																	else if (pGate5->getGateType() != GateType::NOT)
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			for (j5 = i5 + 1; j5 < 8; ++j5)
																			{
																				pGate5->setInput2(vpInputGates[j5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			if (pGate5->equals(&vvpEqualsGates[5]))
																			{
																				//do nothing
																			}
																			else if (pGate6->getGateType() != GateType::NOT)
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					for (j6 = i6 + 1; j6 < 9; ++j6)
																					{
																						pGate6->setInput2(vpInputGates[j6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					if (pGate6->equals(&vvpEqualsGates[6]))
																					{
																						//do nothing
																					}
																					else if (pGate7->getGateType() != GateType::NOT)
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							for (j7 = i7 + 1; j7 < 10; ++j7)
																							{
																								pGate7->setInput2(vpInputGates[j7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							if (pGate7->equals(&vvpEqualsGates[7]))
																							{
																								//do nothing
																							}
																							else
																							{
																								if (testCircuit())
																								{
																									return 0;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
												else
												{
													for (i3 = 0; i3 < 6; ++i3)
													{
														pGate3->setInput1(vpInputGates[i3]);
														if (pGate3->equals(&vvpEqualsGates[3]))
														{
															//do nothing	
														}
														else if (pGate4->getGateType() != GateType::NOT)
														{
															for (i4 = 0; i4 < 7; ++i4)
															{
																pGate4->setInput1(vpInputGates[i4]);
																for (j4 = i4 + 1; j4 < 7; ++j4)
																{
																	pGate4->setInput2(vpInputGates[j4]);
																	if (pGate4->equals(&vvpEqualsGates[4]))
																	{
																		//do nothing
																	}
																	else if (pGate5->getGateType() != GateType::NOT)
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			for (j5 = i5 + 1; j5 < 8; ++j5)
																			{
																				pGate5->setInput2(vpInputGates[j5]);
																				if (pGate5->equals(&vvpEqualsGates[5]))
																				{
																					//do nothing
																				}
																				else if (pGate6->getGateType() != GateType::NOT)
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						for (j6 = i6 + 1; j6 < 9; ++j6)
																						{
																							pGate6->setInput2(vpInputGates[j6]);
																							if (pGate6->equals(&vvpEqualsGates[6]))
																							{
																								//do nothing
																							}
																							else if (pGate7->getGateType() != GateType::NOT)
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									for (j7 = i7 + 1; j7 < 10; ++j7)
																									{
																										pGate7->setInput2(vpInputGates[j7]);
																										if (pGate7->equals(&vvpEqualsGates[7]))
																										{
																											//do nothing
																										}
																										else
																										{
																											if (testCircuit())
																											{
																												return 0;
																											}
																										}
																									}
																								}
																							}
																							else
																							{
																								for (i7 = 0; i7 < 10; ++i7)
																								{
																									pGate7->setInput1(vpInputGates[i7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i6 = 0; i6 < 9; ++i6)
																					{
																						pGate6->setInput1(vpInputGates[i6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		for (i5 = 0; i5 < 8; ++i5)
																		{
																			pGate5->setInput1(vpInputGates[i5]);
																			if (pGate5->equals(&vvpEqualsGates[5]))
																			{
																				//do nothing
																			}
																			else if (pGate6->getGateType() != GateType::NOT)
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					for (j6 = i6 + 1; j6 < 9; ++j6)
																					{
																						pGate6->setInput2(vpInputGates[j6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					if (pGate6->equals(&vvpEqualsGates[6]))
																					{
																						//do nothing
																					}
																					else if (pGate7->getGateType() != GateType::NOT)
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							for (j7 = i7 + 1; j7 < 10; ++j7)
																							{
																								pGate7->setInput2(vpInputGates[j7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							if (pGate7->equals(&vvpEqualsGates[7]))
																							{
																								//do nothing
																							}
																							else
																							{
																								if (testCircuit())
																								{
																									return 0;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
														else
														{
															for (i4 = 0; i4 < 7; ++i4)
															{
																pGate4->setInput1(vpInputGates[i4]);
																if (pGate4->equals(&vvpEqualsGates[4]))
																{
																	//do nothing
																}
																else if (pGate5->getGateType() != GateType::NOT)
																{
																	for (i5 = 0; i5 < 8; ++i5)
																	{
																		pGate5->setInput1(vpInputGates[i5]);
																		for (j5 = i5 + 1; j5 < 8; ++j5)
																		{
																			pGate5->setInput2(vpInputGates[j5]);
																			if (pGate5->equals(&vvpEqualsGates[5]))
																			{
																				//do nothing
																			}
																			else if (pGate6->getGateType() != GateType::NOT)
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					for (j6 = i6 + 1; j6 < 9; ++j6)
																					{
																						pGate6->setInput2(vpInputGates[j6]);
																						if (pGate6->equals(&vvpEqualsGates[6]))
																						{
																							//do nothing
																						}
																						else if (pGate7->getGateType() != GateType::NOT)
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								for (j7 = i7 + 1; j7 < 10; ++j7)
																								{
																									pGate7->setInput2(vpInputGates[j7]);
																									if (pGate7->equals(&vvpEqualsGates[7]))
																									{
																										//do nothing
																									}
																									else
																									{
																										if (testCircuit())
																										{
																											return 0;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							for (i7 = 0; i7 < 10; ++i7)
																							{
																								pGate7->setInput1(vpInputGates[i7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			else
																			{
																				for (i6 = 0; i6 < 9; ++i6)
																				{
																					pGate6->setInput1(vpInputGates[i6]);
																					if (pGate6->equals(&vvpEqualsGates[6]))
																					{
																						//do nothing
																					}
																					else if (pGate7->getGateType() != GateType::NOT)
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							for (j7 = i7 + 1; j7 < 10; ++j7)
																							{
																								pGate7->setInput2(vpInputGates[j7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							if (pGate7->equals(&vvpEqualsGates[7]))
																							{
																								//do nothing
																							}
																							else
																							{
																								if (testCircuit())
																								{
																									return 0;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
																else
																{
																	for (i5 = 0; i5 < 8; ++i5)
																	{
																		pGate5->setInput1(vpInputGates[i5]);
																		if (pGate5->equals(&vvpEqualsGates[5]))
																		{
																			//do nothing
																		}
																		else if (pGate6->getGateType() != GateType::NOT)
																		{
																			for (i6 = 0; i6 < 9; ++i6)
																			{
																				pGate6->setInput1(vpInputGates[i6]);
																				for (j6 = i6 + 1; j6 < 9; ++j6)
																				{
																					pGate6->setInput2(vpInputGates[j6]);
																					if (pGate6->equals(&vvpEqualsGates[6]))
																					{
																						//do nothing
																					}
																					else if (pGate7->getGateType() != GateType::NOT)
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							for (j7 = i7 + 1; j7 < 10; ++j7)
																							{
																								pGate7->setInput2(vpInputGates[j7]);
																								if (pGate7->equals(&vvpEqualsGates[7]))
																								{
																									//do nothing
																								}
																								else
																								{
																									if (testCircuit())
																									{
																										return 0;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						for (i7 = 0; i7 < 10; ++i7)
																						{
																							pGate7->setInput1(vpInputGates[i7]);
																							if (pGate7->equals(&vvpEqualsGates[7]))
																							{
																								//do nothing
																							}
																							else
																							{
																								if (testCircuit())
																								{
																									return 0;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			for (i6 = 0; i6 < 9; ++i6)
																			{
																				pGate6->setInput1(vpInputGates[i6]);
																				if (pGate6->equals(&vvpEqualsGates[6]))
																				{
																					//do nothing
																				}
																				else if (pGate7->getGateType() != GateType::NOT)
																				{
																					for (i7 = 0; i7 < 10; ++i7)
																					{
																						pGate7->setInput1(vpInputGates[i7]);
																						for (j7 = i7 + 1; j7 < 10; ++j7)
																						{
																							pGate7->setInput2(vpInputGates[j7]);
																							if (pGate7->equals(&vvpEqualsGates[7]))
																							{
																								//do nothing
																							}
																							else
																							{
																								if (testCircuit())
																								{
																									return 0;
																								}
																							}
																						}
																					}
																				}
																				else
																				{
																					for (i7 = 0; i7 < 10; ++i7)
																					{
																						pGate7->setInput1(vpInputGates[i7]);
																						if (pGate7->equals(&vvpEqualsGates[7]))
																						{
																							//do nothing
																						}
																						else
																						{
																							if (testCircuit())
																							{
																								return 0;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	delete pInput1;
	delete pInput2;
	delete pInput3;
	delete pInput4;
	delete pGate1;
	delete pGate2;
	delete pGate3;
	delete pGate4;
	delete pGate5;
	delete pGate6;
	delete pGate7;
	return 1;
}