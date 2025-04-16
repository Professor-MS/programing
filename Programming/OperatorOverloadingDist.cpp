// Unary Operator Overloading --> Minus operator can be overloaded.
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int in)
    {
        feet = f;
        inches = in;
    }
    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
        return Distance(inches, feet);
    }
    // Overloaded Minus(-) Operator
    int displayDistance()
    {
        cout << "Feet: " << feet << endl
             << "Inches: " << inches << "\n"
             << endl;
    }
};

int main()
{
    Distance D1(5, 6), D2(-4, 9);
    -D1;
    D1.displayDistance();
    -D2;
    D2.displayDistance();
    // cout<<"Operator Overloaded "<<v<<endl;

    return 0;
}