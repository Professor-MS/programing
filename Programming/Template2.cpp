#include <iostream>
using namespace std;
// class template with multiple parameters(can be separated by Comma)
template <class T1 = char, class T2 = float, class T3 = string>
// template <class T1, class T2> ////For Two Parameter passing
class MyClass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    MyClass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void Dsiplay()
    {
        cout << this->data1 << endl
             << this->data2 << endl
             << this->data3 << endl;
    }
};

int main()
{
    MyClass<> obj('C', 1.83, "Salman");
    // MyClass<char, float> obj('C', 1.83); //For Two Parameter passing
    obj.Dsiplay();

    return 0;
}