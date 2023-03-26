// write a program to print absolute value of a number entered by the user.
#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "Enter a number: " << endl;
    cin >> x;

    if (x < 0)
    {

        x = x * (-1);
    }

    cout << "The absolute value of x is: " << x << endl;

    return 0;
}