#include <iostream>
using namespace std;
template <typename T> // we define template because it help us to define a generic class that can work with any data
class Rectangle
{
private:
    T length;
    T breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    };
    Rectangle(T l, T b)
    {
        length = l;
        breadth = b;
    }
    T area()
    {
        return length * breadth;
    }
    ~Rectangle()
    {
        cout << "Destructor called." << endl;
    }
};
int main()
{
    Rectangle<int> rect1(3, 5);
    cout << "Template for int Values " << rect1.area() << endl;
    Rectangle<float> rect2(4.5, 6.7);
    cout << "Template for Float Values " << rect2.area() << endl;

    return 0;
}