/*Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.*/
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }

    int ans = 0;
    int power = 1;
    while (sum > 0)
    {
        int parity_digit = sum % 2;
        ans += power * parity_digit;
        power *= 10;
        sum /= 2;
    }

    cout << ans << endl;
}