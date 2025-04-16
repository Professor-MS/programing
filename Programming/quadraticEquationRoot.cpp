#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double D, R1, R2, real, imaginary;

    cout << "Enter three numbers (coefficients a, b, c): " << endl;
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "This is a linear equation, not a quadratic equation." << endl;
    }
    else
    {
        D = (b * b) - (4 * a * c);
        cout << "Discriminant: " << D << endl;

        if (D == 0)
        {
            R1 = -b / (2 * a);
            cout << "One Real Root: R1 = " << R1 << endl;
        }
        else if (D > 0)
        {
            R1 = (-b + sqrt(D)) / (2 * a);
            R2 = (-b - sqrt(D)) / (2 * a);
            cout << "Two Real Roots:" << endl
                 << "R1 = " << R1 << endl
                 << "R2 = " << R2 << endl;
        }
        else
        {
            real = -b / (2 * a);
            imaginary = sqrt(-D) / (2 * a);
            cout << "Two Complex Roots:" << endl
                 << "R1 = " << real << " + " << imaginary << " * i" << endl
                 << "R2 = " << real << " - " << imaginary << " * i" << endl;
        }
    }

    return 0;
}
