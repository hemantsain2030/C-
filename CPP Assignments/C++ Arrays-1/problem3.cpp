/*Given an integer array and its size, reverse the array and print it. Here 1<size<101.*/
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr1[6] = {1, 4, 0, 5, -2, 15};
    int arr2[5] = {2, 6, 3, 9, 4};

    reverse(arr1, 6);
    reverse(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);
}