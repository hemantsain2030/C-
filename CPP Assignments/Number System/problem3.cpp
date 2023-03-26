/*Given two binary numbers, return the greatest of these numbers in decimal format.*/
#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter the two binary number: ";
    cin >> num1 >> num2;

    int dec1 = 0;
    int dec2 = 0;
    int pw = 1;
    while (num1 > 0)
    { // converting num1 into decimal

        int unit_digit = num1 % 10;
        dec1 += pw * unit_digit;
        pw *= 2;
        num1 /= 10;
    }
    pw = 1;
    while (num2 > 0)
    {
        int unit_digit = num2 % 10;
        dec2 += pw * unit_digit;
        pw *= 2;
        num2 /= 10;
    }

    if (dec1 > dec2)
    {
        cout << "The greatest number is: " << dec1 << endl;
    }
    else
    {
        cout << "The greatest number is: " << dec2 << endl;
    }
}