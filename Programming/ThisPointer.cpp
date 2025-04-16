// Uses of "this->" Keywords
// this-> is a pointer keywords which point to the object that has been created.
#include <iostream>
using namespace std;
class A
{
public:
    int a;
    // A &setData(int a)
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }
    void getData()
    {
        cout << "The Value of a is " << a;
    }
};
int main()
{
    A a;
    // a.setData(5).getData();
    a.setData(5);
    a.getData();
    return 0;
}