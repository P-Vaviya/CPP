#include <iostream>
using namespace std;

void Calculator(double num1, double num2, int operation){


    double result;

    switch (operation) {
        case 1 :
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2 :
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3 :
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4 :
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid Input !" << endl;
            break;
    }
    }

int main() {
    double num1, num2;
    int operation;

    cout << "Enter an input :" << endl;
    cout << " 1  : Addition" << endl;
    cout << " 2  : Subtraction" << endl;
    cout << " 3  : Multiplication" << endl;
    cout << " 4  : Division" << endl;
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Calculator(num1, num2, operation);
    return 0;
}