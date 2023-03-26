/*Create a calculator using switch statement to perform addition, subtraction,
multiplication and division.*/
#include <iostream>
using namespace std;

int main()
{

    float num1, num2;
    char op;
    cout << "Enter an operator(+,-,/,*):";
    cin >> op;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;

    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        break;

    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;

    default:
        cout << "Error! The operator is not valid";
        break;
    }
}