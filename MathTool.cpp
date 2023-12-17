#include <iostream>
#include "Algebra.h"

using namespace std;

int main() {
    cout << "Menu. \n";
    cout << "1. Algebra" << endl;
    cout << "2. Geometry" << endl;

    int choice;
    cout << "Enter choice: ";
    cin >> choice;

    system("cls");

    if (choice == 1) {
        cout << "Algebra Menu. \n";
        cout << "1. Arithemtic Operations" << endl;
        cout << "2. Equations" << endl;
    }

    int menuChoice;
    cout << "Enter choice: ";
    cin >> menuChoice;

    switch (menuChoice) {
    case 1:
        system("cls");

        cout << "Arithemetic Menu. \n";
        cout << "1. Number Operations \n";

        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            system("cls");

            cout << "Number Operations Menu. \n";
            cout << "1. Square Number" << endl;
            cout << "2. Cubic Number" << endl;
            cout << "3. N Number" << endl;
            cout << "4. Square Root" << endl;

            int menuChoice2;
            cout << "Enter choice: " << endl;
            cin >> menuChoice2;

            system("cls");

            if (menuChoice2 == 1) {
                float number;
                cout << "Enter number: ";
                cin >> number;

                cout << number << "^2=" << raiseNumberToThePower(number, 2);
            }

            if (menuChoice2 == 2) {
                float number;
                cout << "Enter number: ";
                cin >> number;

                cout << number << "^3=" << raiseNumberToThePower(number, 3);
            }

            if (menuChoice2 == 3) {
                float number;
                cout << "Enter number: ";
                cin >> number;

                int power;
                cout << "Enter power: ";
                cin >> power;

                cout << number << "^" << power << "=" << raiseNumberToThePower(number, power);
            }

            if (menuChoice2 == 4) {
                float number;
                cout << "Enter number: ";
                cin >> number;

                cout << "Square root of " << number << "=" << squareRoot(number);
            }
            break;
        }
        case 2:
            system("cls");

            cout << "Equations Menu. \n";
            cout << "1. Linear Equations" << endl;
            cout << "2. Quadratic Equations \n";

            int choice2;
            cout << "Enter choice: ";
            cin >> choice2;

            system("cls");

            if (choice2 == 1) {
                float number, x;
                cout << "Enter number: ";
                cin >> number;

                cout << "Enter x: ";
                cin >> x;

                solveLinearEquation(number, x);
            }

            if (choice2 == 2) {
                float a, b, c;
                cout << "Enter a: ";
                cin >> a;

                cout << "Enter b: ";
                cin >> b;

                cout << "Enter c: ";
                cin >> c;

                if (a == 0)
                    solveLinearEquation(c, b);
                else
                    solveQuadraticEquation(a, b, c);
                break;
            }
    }
}