/*Given an integer array and its size, find the sum of the greatest and smallest
integers present in the array. Here 1<size<101.*/
#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int max_val = INT32_MIN;
    int min_val = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }
    int ans = max_val + min_val;
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of the greatest integer and smallest integer present in array are: " << sum(arr, n) << endl;
}