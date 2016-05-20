//Main.cpp
#include "stdafx.h"
#include "Calculator.h"

using namespace std;

//declare function prototypes above main
void changeNumA(Calculator, double); //pass by value function
void changeNumA1(Calculator &, double); //pass by reference function

int main()
{
	Calculator calculator(10, 5, 8);

	calculator.printAttributes();

	cout << "A - B - C = " << calculator.calcSub() << endl;
	cout << "A * B * C = " << calculator.calcMult() << endl;
	cout << "A / B / C = " << calculator.calcDiv() << endl;
	cout << "A ^ 2 = " << calculator.calcPowA() << endl;
	cout << "B ^ 2 = " << calculator.calcPowB() << endl;
	cout << "C ^ 2 = " << calculator.calcPowC() << endl;

	changeNumA(calculator, 13);
	cout << "Result of pass by value for Number A to 13 = " << endl;
	cout << "A - B - C = " << calculator.calcSub() << endl;
	cout << "A * B * C = " << calculator.calcMult() << endl;
	cout << "A / B / C = " << calculator.calcDiv() << endl;
	cout << "A ^ 2 = " << calculator.calcPowA() << endl;
	cout << "B ^ 2 = " << calculator.calcPowB() << endl;
	cout << "C ^ 2 = " << calculator.calcPowC() << endl;

	changeNumA1(calculator, 13);
	cout << "Result of pass by reference for Number A to 13 = " << endl;
	cout << "A - B - C = " << calculator.calcSub() << endl;
	cout << "A * B * C = " << calculator.calcMult() << endl;
	cout << "A / B / C = " << calculator.calcDiv() << endl;
	cout << "A ^ 2 = " << calculator.calcPowA() << endl;
	cout << "B ^ 2 = " << calculator.calcPowB() << endl;
	cout << "C ^ 2 = " << calculator.calcPowC() << endl;

	system("pause");
}

void changeNumA(Calculator a, double a1)
{
	a.setNumA(a1);
}

void changeNumA1(Calculator &a, double a1)
{
	a.setNumA(a1);
}
