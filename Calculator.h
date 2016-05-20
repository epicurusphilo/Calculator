//Calculator.h

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Calculator //declare class Calculator 
{
public:
	Calculator();
	Calculator(double, double, double);
	double getNumA() { return NumA; }
	void setNumA(double a) { NumA = a; }
	double getNumB() { return NumB; }
	void setNumB(double b) { NumB = b; }
	double getNumC() { return NumC; }
	void setNumC(double c) { NumC = c; }

	void printAttributes();
	double calcSub();
	double calcMult();
	double calcDiv();
	double calcPowA();
	double calcPowB();
	double calcPowC();

private:
	double NumA;
	double NumB;
	double NumC;
};
