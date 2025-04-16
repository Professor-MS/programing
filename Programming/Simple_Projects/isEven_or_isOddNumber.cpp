#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter whole Number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is Even Number." << endl;
    }
    else
        cout << number << " is odd Number." << endl; // 1:35

    return 0;
}