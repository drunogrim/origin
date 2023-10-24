#include <iostream>
#include "functions.h"

using namespace std;

int input_var() {
	int a;
	cout << "input var: ";
	cin >> a;
	return a;
}

int input_oper() {
	int a;
	do{
		cout << "Select the operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - exponentiation): ";
		cin >> a;
	} while (a < 1 || a > 5);
	return a;
}

void addition(int a, int b) {
	cout << a << " plus " << b << " = " << a + b;
}

void subtraction(int a, int b) {
	cout << a << " minus " << b << " = " << a - b;
}

void multiplication(int a, int b) {
	cout << a << " minus " << b << " = " << a * b;
}

void division(int a, int b) {
	cout << a << " minus " << b << " = " << a / b;
}

void exponentiation(int a, int b) {
	cout << a << " minus " << b << " = " << pow(a, b);
}

