#include <iostream>
using namespace std;
int main()
{
    system("cls"); // Clear Screen or terminal
    cout << "______Welcome to Guessing Number and finding that Number game______\n";
    int hostUserNumber, guestUserNumber;
    cout << "Host: ";
    cin >> hostUserNumber;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNumber;
    //(hostUserNumber == guestUserNumber) ? cout << "Correct! Good Job\n" : cout << "Failed! Try another one\n"; //Ternary operator, This single line also work as like if-else statement work.
    if (hostUserNumber == guestUserNumber)
        cout << "Correct! Good Job\n";
    else
        cout << "Failed! Try another one\n";

    system("pause>0");

    return 0;
}