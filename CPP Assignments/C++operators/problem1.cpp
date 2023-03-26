// Write a program to chaeck whether two numbers(enterd by user) are equal or not.
#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the Second number: ";
    cin >> y;

    cout << (x == y) ? 1 : 0;
    return 0;
}