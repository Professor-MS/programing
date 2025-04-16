#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your age: ";
    cin >> age;
    try
    {
        if (age > 18)
        {
            cout << "You are Allowed to the Party." << endl;
        }
        else if (age <= 0)
        {
            cout << "Age must be greater than zero\n";
        }

        else
        {
            throw(age);
        }
    }

    catch (int age)
    {
        cout << "You are not Allowed to the Party" << endl;
    }
    system("pause");
    return 0;
}