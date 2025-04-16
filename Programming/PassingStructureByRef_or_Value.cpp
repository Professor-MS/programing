// Passing structure by Value and By Reference.
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle r1) // For call by reference we should only change r1 to &r1
{
    return r1.length * r1.breadth;
}
int main()
{
    struct Rectangle r = {10, 5};
    // pass by value doesnot affect the original value but pass by reference might change the original value.
    cout << area(r);

    return 0;
}