/*Given an integer array(arr) and its size(n), print the count of
odd and even integers present in the array.*/ \
#include <iostream>
using namespace std;

int count(int arr[], int n)
{

    int count_odd = 0;
    int count_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "the number of odd integers: " << count(arr, size) << endl;
    cout << "The number of even integers are: " << size - count(arr, size) << endl;
}