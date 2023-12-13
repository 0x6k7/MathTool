#pragma once
#include <iostream>

using namespace std;

void calculator(float, float);
void solveLinearEquation(float, float);
void solveQuadraticEquation(float, float, float);

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

void solveLinearEquation(float x1, float number) {
	system("cls");

	float x = x1 / number;

	if (number == 0 && x == 0)
		cout << "The equation has infinite solutions" << endl;
	else if (number == 0)
		cout << "The equation has no solutions" << endl;
	else {
		cout << number << "x" << "=" << x1 << endl;
		cout << "x=" << x1 << endl;
	}
}

void solveQuadraticEquation(float a, float b, float c) {
	system("cls");

	float discriminant = pow(b, 2) - 4 * a * c;

	if (discriminant > 0) {
		float x_1 = (-b + sqrt(discriminant)) / (2 * a);
		float x_2 = (-b - sqrt(discriminant)) / (2 * a);

		cout << "x_1=" << x_1 << endl;
		cout << "x_2=" << x_2 << endl;
	}

	else if (discriminant == 0) {
		float x_1 = (-b) / (2 * a);
		cout << "x_1=" << x_1 << endl;
	}

	else
		cout << "The equation has no solutions" << endl;
}