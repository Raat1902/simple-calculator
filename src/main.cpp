#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operationCom;
    int resultVal;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    cout << "Enter an operation (+, -, x, /): ";
    cin >> operationCom;

    if (operationCom == '+') {
        resultVal = num1 + num2;
        cout << "Result is: " << resultVal << endl;
    } else if (operationCom == '-') {
        resultVal = num1 - num2;
        cout << "Result is: " << resultVal << endl;
    } else if (operationCom == 'x') {
        resultVal = num1 * num2;
        cout << "Result is: " << resultVal << endl;
    } else if (operationCom == '/') {
        if (num2 == 0) {
            cout << "Error: Cannot divide by zero." << endl;
            return 1;
        }
        resultVal = num1 / num2;
        cout << "Result is: " << resultVal << endl;
    } else {
        cout << "Invalid operation entered." << endl;
    }

    return 0;
}
