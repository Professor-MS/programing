#include <iostream>
using namespace std;
int main()
{
    double a, b, c;

    cout << "Enter Two Number ";
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << "The Division is " << c << endl;
        }
        else
        {
            throw(b);
        }
    }
    catch (double b)
    {
        cout << "The Denominator must be Non-Zero! " << endl;
    }
    system("pause");
    return 0;
}