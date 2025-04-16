
#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "Swaping values of a= " << a << " and b= " << b << endl;
    cout << "____Now after swaping____" << endl;
    swap(&a, &b); // Call by Address to modified actual parameter.
    cout << "a= " << a << endl
         << "b= " << b << endl;
    system("pause");
    return 0;
}