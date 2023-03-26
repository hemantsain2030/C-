/*Write a C++ program to check whether a Number can be expressed as a Sum
 of Two Prime Numbers.*/
#include <iostream>
using namespace std;

int main()
{

    int num, i, j;
    int f1 = 1, f2 = 1, f3 = 0;
    cout << "Enter a +ive integer: ";
    cin >> num;
    i = 3;
    do
    {
        f1 = 1;
        f2 = 1;
        j = 2;
        do
        {
            if (i % j == 0)
            {
                f1 = 0;
                j = i;
            }
            j = 2;
            do
            {
                if ((num - i) % j == 0)
                {
                    f2 = 0;
                    j = num - i;
                }
                j++;
            } while (j < num - i);
            if (f1 == 1 && f2 == 1)
            {
                cout << num << " = " << i << " + " << num - i << endl;
                f3 = 1;
            }
            j++;
        } while (j < 1);
        i++;
    } while (i <= num / 2);
    if (f3 == 0)
    {
        cout << num << "cannot be expressed as sum of two prime numbers.";
    }
}