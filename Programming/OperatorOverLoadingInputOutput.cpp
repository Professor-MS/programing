// Input, Output Operator Overloading
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
    // Overloading of Extrcation operator (<<) and Insertion opertaor (>>)
    friend ostream &operator<<(ostream &output, const Distance &D)
    {
        output << "\nFeet: " << D.feet << endl
               << "Inches: " << D.inches << endl;
        return output;
    }

    friend istream &operator>>(istream &input, Distance &D)
    {
        input >> D.feet >> D.inches;
        return input;
    }
};
int main()
{
    Distance D1(5, 6), D2(8, 7), D3;
    cout << "Enter the value of object ";
    cin >> D3;
    cout << "Fisrt Distance: " << D1;
    cout << "Second Distance: " << D2;
    cout << "Third Distance: " << D3;

    return 0;
}