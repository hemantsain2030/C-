/*Write a program to print + pattern given below.
 *
 *
 *****
 *
 *
 */
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 5;

//     for (int line = 0; line < n; line++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (i == n / 2)
//             {
//                 cout << "*";
//             }
//             else if (line == n / 2)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ans = 0;
    while (n != 0)
    {

        int digit = n % 10;
        if (ans > INT16_MAX / 10 || ans < INT16_MIN / 10)
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        n /= 10;
    }
    cout << ans << endl;
}