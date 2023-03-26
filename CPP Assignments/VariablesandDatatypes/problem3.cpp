// write a c++ program to take length and breadth of a rectangle and print its area

#include <iostream>
using namespace std;

int main()
{

    int lenght;
    cout << "Enter the length of rectangle: ";
    cin >> lenght;
    int breadth;
    cout << "Enter the breadth of rectangle: ";
    cin >> breadth;

    int area;
    cout << "The area of rectangle is: " << lenght * breadth << endl;

    return 0;
}