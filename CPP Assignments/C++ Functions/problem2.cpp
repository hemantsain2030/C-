/*Given radius of a circle. write a function to print the area and
circumference of the circle.*/
#include <iostream>
using namespace std;

double circum(int r)
{
    double circumferece = 2 * 3.14 * r;
    return circumferece;
}

double area(int r)
{
    double area = 3.14 * r * r;
    return area;
}

int main()
{
    int r;
    cout << "Enter the radius of circle: ";
    cin >> r;

    cout << "The circumference of circle: " << circum(r) << endl;
    cout << "The area of circle: " << area(r) << endl;
}