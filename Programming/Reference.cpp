#include <iostream>
using namespace std;

int main()
{
    int A = 10;
    int &X = A; // 'X' is a reference to 'A'
    cout << "The Value of A : " << A << endl;
    cout << "The Value of X: " << X << endl;
    X = 11; // Changing the value through the reference
    cout << "After changing Values through Refrence." << endl;
    cout << "The Value of A : " << A << endl;
    cout << "The Value of X: " << X << endl;

    return 0;
}
