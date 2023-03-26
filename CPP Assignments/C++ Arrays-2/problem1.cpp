// C++ program to find the
// sum in given range L to R

#include <bits/stdc++.h>
using namespace std;

// Function to find the sum
// within the given range
int findSum(int L, int R)
{
    vector<int> arr;

    // generating array from given sequence
    int i = 0;
    int x = 2;
    while (i <= R)
    {
        arr.push_back(i + x);

        if (i + 1 <= R)
            arr.push_back(i + 1 + x);

        x *= -1;

        i += 2;
    }

    // calculate the desired sum
    int sum = 0;

    for (int i = L; i <= R; ++i)

        sum += arr[i];

    // return the sum
    return sum;
}

// Driven code
int main()
{

    // initialise the range
    int L = 0, R = 5;

    cout << findSum(L, R);

    return 0;
}
