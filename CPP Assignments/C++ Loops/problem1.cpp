/*Write a program to calculate the factorial of a number.*/
#include <iostream>
using namespace std;

int main()
{

    int j, number;
    cout << "Enter the number: " << endl;
    cin >> number;

    int fact = 1;
    for (int j = 1; j <= number; j++)
    {
        fact = fact * j;
    }

    cout << "The factorial of given number is: " << fact << endl;

    return 0;
}