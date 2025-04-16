#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int year, month;
    cout << "Enter Year & month ";
    cin >> year >> month;
    switch (month)
    {
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days month\n" : cout << "28 days month\n";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days month\n";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days month\n";
        break;
    default:
        cout << "Invalid Input.\n";
        break;
    }
    system("pause>0");
    return 0;
}