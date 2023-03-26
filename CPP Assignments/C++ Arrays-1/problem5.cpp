/*Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.*/
#include <iostream>
using namespace std;

int val(int arr[], int n)
{

    int missing = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int range_sum = (n) * (n + 1) / 2;
    missing = range_sum - sum;

    return missing;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The missing number is: " << val(arr, n) << endl;
}