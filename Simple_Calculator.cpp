#include <iostream>
using namespace std;
int main() {
    double n1, n2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> n2;

    double result;

    switch (operation) {
        case '+':cout<<"Result:"<<n1+n2<<endl;
            result = n1 + n2;
            break;
        case '-':cout<<"Result:"<<n1-n2<<endl;
            result = n1 - n2;
            break;
        case '*':cout<<"Result:"<<n1*n2<<endl;
            result = n1 * n2;
            break;
        case '/':cout<<"Result:"<<n1/n2<<endl;
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; 
    }
    return 0; 
}