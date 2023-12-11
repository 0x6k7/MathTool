#pragma once
#include <iostream>

using namespace std;

void calculator(float, float);

void calculator(float number1, float number2) {
	system("cls");

	float addition = number1 + number2;
	float subraction = number1 - number2;
	float multiplication = number1 * number2;
	float division = number1 / number2;

	cout << "Addition \n";
	cout << number1 << "+" << number2 << "=" << addition << endl;

	cout << "Subtraction \n";
	cout << number1 << "-" << number2 << "=" << subraction << endl;

	cout << "Multiplication \n";
	cout << number1 << "*" << number2 << "=" << multiplication << endl;

	cout << "Division \n";
	if (number2 != 0)
		cout << number1 << "/" << number2 << "=" << division;
	else
		cout << "Error: Division by Zero" << endl;
}