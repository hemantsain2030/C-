/*Write a program to print a rectangle out of *.
***
***
*/
#include <iostream>
using namespace std;

int main()
{

    int starRows, starCols;
    cout << "Please enter the no. of star rows: " << endl;
    cin >> starRows;
    cout << "Please enter the no. of star columns: " << endl;
    cin >> starCols;

    for (int line = 1; line <= starRows; line++)
    {
        for (int j = 0; j < starCols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}