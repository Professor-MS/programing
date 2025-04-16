#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Good Morning" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Subuh Bakhair" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base1::greet(); // chances of Ambiguity may be arises here if we doesn't show the base class to derived
        // Base2::greet();
    }
};

int main()
{
    cout << "___Ambiguity may occur when functions name are same in different calsses.___" << endl;
    Base1 base1;
    Base2 base2;
    Derived derive;
    base1.greet();
    base2.greet();
    derive.greet();
    system("pause");
    return 0;
}