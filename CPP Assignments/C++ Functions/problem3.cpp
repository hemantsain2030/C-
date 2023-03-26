/*Given the age of a person, write a function to check if the person is
eligible to vote or not.*/
#include <iostream>
using namespace std;

bool vote(int age)
{

    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (vote(age) == true)
    {
        cout << "Yes you are eligible to vote" << endl;
    }
    else
    {
        cout << "No You are not eligible to vote";
    }
}