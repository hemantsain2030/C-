/*Write a program to reverse a given number.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;

    int reverse = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n /= 10;
    }

    cout << "Reverse of given number is: " << reverse << endl;
}