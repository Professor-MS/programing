#include <iostream>
using namespace std;

int main()
{
    system("cls");
    float number1, number2;
    char Operation;
    cout << "\t\tProfessor Calculator\n";
    cin >> number1 >> Operation >> number2;
    switch (Operation)
    {
    case '-':
        cout << number1 << Operation << number2 << " = " << number1 - number2 << endl;
        break;
    case '+':
        cout << number1 << Operation << number2 << " = " << number1 + number2 << endl;
        break;
    case '*':
        cout << number1 << Operation << number2 << " = " << number1 * number2 << endl;
        break;
    case '/':
        cout << number1 << Operation << number2 << " = " << number1 / number2 << endl;
        break;
    case '%':
        bool num1Int, num2Int;
        num1Int = ((int)number1 == number1);
        num2Int = ((int)number2 == number2);
        if (num1Int && num2Int)
        {
            cout << number1 << Operation << number2 << " = " << (int)number1 % (int)number2 << endl;
        }
        else
            cout << "Not Valid!\n";

        break;

    default:
        cout << "Invalid Operation!\n";
        break;
    }
    system("pause>0");
    return 0;
}