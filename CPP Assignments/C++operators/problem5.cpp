// Write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>
using namespace std;

int main()
{

    int n, first, second, third, sum;
    n = 234;
    first = n / 100;
    n = n % 100;

    second = n / 10;
    third = n % 10;

    sum = first + second + third;

    cout << "The sum of digits: " << sum << endl;

    return 0;
}