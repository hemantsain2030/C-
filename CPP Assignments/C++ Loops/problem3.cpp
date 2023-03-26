/*write a program to find the sum of n natural numbers.*/
#include <iostream>
using namespace std;

int main()
{

    int num, sum;
    sum = 0;
    cout << "Enter the number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; ++i)
    {
        sum += i;
    }

    cout << "Sum = " << sum << endl;
}