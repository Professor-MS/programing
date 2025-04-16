#include <iostream>
using namespace std;
void swap(int &x, int &y) // Call by reference. it mean nickname of actual parameter. it can change the value of actual parameter
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    a = 15;
    b = 30;
    swap(a, b);
    cout << "The Value of Actual paramter is change" << endl;
    cout << "After swaping a= " << a << endl
         << "b= " << b << endl;
             system("pause");
    return 0;
}