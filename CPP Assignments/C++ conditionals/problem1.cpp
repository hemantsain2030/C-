/*Write a program which takes the value of length and breadth from user
and check if it is a square or not.*/
#include <iostream>
using namespace std;

int main()
{

    int length, breadth;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;

    if (length == breadth)
    {
        cout << "it is a sqauare";
    }
    else
    {
        cout << "it is a rectangle";
    }

    return 0;
}