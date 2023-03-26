// Write a program to take input from user for cost price(C.P) and selling price(S.P)
// and calculate Profit and Loss.

#include <iostream>
using namespace std;

int main()
{

    int costPrice, sellingPrice, amt;
    cout << "Enter the costprice: ";
    cin >> costPrice;
    cout << "Enter the sellingprice: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice)
    {
        amt = sellingPrice - costPrice; // calculate profit
        cout << "The Profit is: " << amt << endl;
    }
    else if (sellingPrice < costPrice)
    {
        amt = costPrice - sellingPrice; // calculate Loss
        cout << "The Loss is: " << amt << endl;
    }
    else
    {
        cout << "There is neither a profit nor a loss" << endl;
    }

    return 0;
}