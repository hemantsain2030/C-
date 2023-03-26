/*Given two numbers a and b, write a program using function to print
all the odd numbers.*/
#include <iostream>
using namespace std;

bool odd(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (odd(i))
        {
            cout << i << " ";
        }
    }
}