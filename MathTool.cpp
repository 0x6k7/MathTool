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

    cout << "Algebra Menu. \n";
    cout << "1. Calculator" << endl;
    cout << "2. Equations" << endl;

    int choice2;
    cout << "Enter choice: ";
    cin >> choice2;

    if (choice2 == 2) {
        cout << "Equations Menu. \n";
        cout << "1. Linear Equations" << endl;
        cout << "2. Quadratic Equations" << endl;
    }

    switch (choice2) {
        case 1:
            int choice2;
            cout << "Enter choice: ";
            cin >> choice2;

            if (choice2 == 1) {
                float number, number2;
                cout << "Enter number 1: ";
                cin >> number;

                cout << "Enter number 2: ";
                cin >> number2;

                calculator(number, number2);
            }

            if (choice2 == 2) {
                float number, x;
                cout << "Enter number: ";
                cin >> number;

                cout << "Enter x: ";
                cin >> x;

                solveLinearEquation(number, x);
            }
            break;
        case 2:
            int choice;
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 2) {
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
        default:
            cout << "Invalid choice" << endl;
    }
}