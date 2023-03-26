/*Wrie a program to print alphabet diamond pattern.
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 5; // given input

    // loop to print upper triangle
    for (int line = 1; line <= n; line++)
    {
        int no_of_spaces = (n - line);
        for (int k = 0; k < no_of_spaces; k++)
        {
            cout << " ";
        }

        // below loop is to print characters for each line
        int no_of_chars = 2 * line - 1;
        for (int j = 0; j < no_of_chars; j++)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    // loop to print lower triangle
    for (int line = n + 1; line <= 2 * n - 1; line++)
    {
        // below loop is to print spaces
        int no_of_spaces = (line - n);
        for (int k = 0; k < no_of_spaces; k++)
        {
            cout << " ";
        }

        // below loop is to print characters for each line
        int no_of_characters = 2 * (2 * n - line) - 1;
        for (int j = 0; j < no_of_characters; j++)
        {
            cout << (char)('A' + j);
        }
        cout << endl;
    }
}