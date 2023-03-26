// write a program to swap two numbers with the help of third number.
#include <iostream>
using namespace std;

int main()
{

    cout << "\n\n Swap the two numbers: \n";
    cout << "----------------------------\n";
    int n1 = 2, n2 = 5, temp;
    cout << "Before swapping the first number is: " << n1 << endl;
    cout << "Before swapping the second number is: " << n2 << endl;
    temp = n2;
    n2 = n1;
    n1 = temp;

    cout << "After swapping the first number is: " << n1 << endl;
    cout << "After swapping the second number is: " << n2 << endl;

    return 0;
}