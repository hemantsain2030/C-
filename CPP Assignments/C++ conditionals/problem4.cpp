/*Write a program to print positive number entered by the user, if user enters
a negative, it is skipped.*/
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "You entered a positive number: " << endl;
    }
    else
    {
        cout << "The number is negative and skipped.";
    }

    return 0;
}