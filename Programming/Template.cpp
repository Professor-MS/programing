#include <iostream>
using namespace std;
template <typename T> // we define template because it help us to define a generic class that can work with any data.
class Arithmatic
{
private:
    T num1;
    T num2;

public:
    Arithmatic()
    {
        num1 = 0;
        num2 = 0;
    }
    Arithmatic(T a, T b)
    {
        num1 = a;
        num2 = b;
    }
    T add()
    {
        T c;
        c = num1 + num2;
        return c;
    }
    T sub()
    {
        T c;
        c = num1 - num2;
        return c;
    }
    ~Arithmatic()
    {
        cout << " " << endl;
    }
};
int main()
{
    Arithmatic<int> Arith1(15, 10); // template for int values
    cout << "int Addition is " << Arith1.add() << endl;
    cout << "int Subtraction is " << Arith1.sub() << endl;
    Arithmatic<float> Arith2(7.4, 5.9); // template for float values
    cout << "Float Addition is " << Arith2.add() << endl;
    cout << "Float Subtraction is " << Arith2.sub() << endl;
    return 0;
}