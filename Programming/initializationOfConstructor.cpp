#include <iostream>
using namespace std;
class Test
{
public:
    int a;
    int b;
    // Test(int i, int j):a(i),b(j){
    // Test(int i, int j):a(i),b(i+j){
    // Test(int i, int j):b(j),a(b+i){ ==>This will Create an error because a is initialized first thsn b.
    Test(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor Executed" << endl;
        cout << "The Value of a is " << a << endl;
        cout << "The Value of b is " << b << endl;
        cout << "Constructor Executed" << endl;
    }
};

int main()
{
    Test t(2, 3);

    system("pause>0");
    return 0;
}