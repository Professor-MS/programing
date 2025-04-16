#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two Number ";
    cin >> a, b;
    if (b != 0)
    {
        c = a / b;
        cout << "Division Successiful " << c << endl;
    }
    else if (b == 0)
    {
        cout << "Division by Zero" << endl;
    }
    return 0;
}