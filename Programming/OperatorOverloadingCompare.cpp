// Binay  Operator Overloading --> (<)  operator can be overloaded to Compare two Distance.
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
    // Overloaded < Operator
    bool operator<(Distance &d)
    {
        if (feet < d.feet)
        {
            return true;
        }
        if (feet == d.feet && inches < d.inches)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Distance D1(5, 6), D2(7, 9);
    if (D1 < D2) // Less than sign (<) can be overloaded to compare two object
    {
        cout << "D1 is Less than D2" << endl;
    }
    else
    {
        cout << "D2 is Less than D1" << endl;
    }

    return 0;
}