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

    switch (choice) {
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
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}