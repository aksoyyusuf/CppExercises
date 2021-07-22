#include "Ex5.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;


// From https://www.geeksforgeeks.org/modulus-two-float-double-numbers/
double findMod(double a, double b)
{
	double mod;
	// Handling negative values
	if (a < 0)
		mod = -a;
	else
		mod = a;
	if (b < 0)
		b = -b;

	// Finding mod by repeated subtraction

	while (mod >= b)
		mod = mod - b;

	// Sign of result typically depends
	// on sign of a.
	if (a < 0)
		return -mod;

	return mod;
}

void execute(void)
{
	double num1 = 0;
	double num2 = 0;

	cout << "Enter two double values and character (+, -, *, / or %)\n";

	char op = ' ';

	while (cin >> num1 >> num2 >> op) {
		switch (op) {
		case '+':
			cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
			break;
		case '-':
			cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
			break;
		case '*':
			cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
			break;
		case '/':
			cout << "The ratio of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
			break;
		case '%':
			cout << "The remainder of " << num1 << " and " << num2 << " is " << findMod(num1, num2) << endl;
			break;
		default:
			cout << "Illegal operation" << endl;
			break;
		}
	}
}
