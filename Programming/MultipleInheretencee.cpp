#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    int set_base1(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    int set_base2(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base 1 is " << base1int << endl;
        cout << "The value of Base 2 is " << base2int << endl;
        cout << "The sum of Base1 and Base2 is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived Salman;
    Salman.set_base1(20);
    Salman.set_base2(10);
    Salman.show();
    return 0;
}