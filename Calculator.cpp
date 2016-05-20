//Calculator.cpp

#include "stdafx.h"
#include "Calculator.h"
#include <math.h>

using namespace std;
//class calculator functions
Calculator::Calculator() //Set number values to 0
{
	NumA = 0;
	NumB = 0;
	NumC = 0;
}

Calculator::Calculator(double a, double b, double c) //set data types
{
	NumA = a;
	NumB = b;
	NumC = c;
}

void Calculator::printAttributes() //show current number values
{
	cout << "Number A: " << NumA << "\t" << "Number B: " << NumB << "\t" << "Number C: " << NumC << "\n";
}

double Calculator::calcSub()
{
	return (NumA - NumB - NumC);
}

double Calculator::calcMult()
{
	return (NumA * NumB * NumC);
}

double Calculator::calcDiv()
{
	return (NumA / NumB / NumC);
}

double Calculator::calcPowA()
{
	return pow(NumA, 2.0);
	return pow(NumB, 2.0);
	return pow(NumC, 2.0);
}

double Calculator::calcPowB()
{
	return pow(NumB, 2.0);
}

double Calculator::calcPowC()
{
	return pow(NumC, 2.0);
}
