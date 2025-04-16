#include <iostream>
using namespace std;

int main()
{
    system("cls");
    float a, b;
    int option;
    cout << "Enter two number: ";
    cin >> a >> b;
    cout << "Choose one of the following operation.\n1. Addition \n2. Subtraction \n3. Multiplication\n";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Addition of two number is " << a + b << endl;
        break;
    case 2:
        cout << "Subtraction of two number is " << a - b << endl;
        break;
    case 3:
        cout << "Multiplication of two number is " << a * b << endl;
        break;

    default:
        cout << "invalid Input\n";
        break;
    }
    system("pause>0");
    return 0;
}