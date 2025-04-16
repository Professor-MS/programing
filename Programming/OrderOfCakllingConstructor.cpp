#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 COnstructor Called" << endl;
    }
    void PrintDataBase1(void)
    {
        cout << "The value of Data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int j)
    {
        data2 = j;
        cout << "Base2 Constructor Called" << endl;
    }
    void PrintDataBase2(void)
    {
        cout << "The value of Data2 is " << data2 << endl;
    }
};
class Derived : public Base2, public Base1 //The order of execution of Constructor will be Change, By Changing this order.  
{
    int derived1;
    int derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class Constructor Called " << endl;
    }
    void PrintDataDerived(void)
    {
        cout << "The value of Derived1 is " << derived1 << endl;
        cout << "The value of Derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived obj(2, 3, 4, 5);
    obj.PrintDataDerived();
    obj.PrintDataBase1();
    obj.PrintDataBase2();

    return 0;
}