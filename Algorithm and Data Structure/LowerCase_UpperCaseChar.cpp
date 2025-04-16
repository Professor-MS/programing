#include <iostream>
using namespace std;

int main()
{
    char CH;
    cout << "Enter Character: ";
    cin >> CH;
    if (CH >= 'a' && CH <= 'z')
    {
        cout << CH << " is at LowerCase " << endl;
    }
    else
        cout << CH << " is at UpperCase." << endl;
    /*if (CH >= 65 && CH <= 90)
    {
        cout << CH << " is at UpperCase " << endl;
    }
    else
        cout << CH << " is at LowerCase." << endl;
        */
    system("pause");
    return 0;
}