#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    int A[5];
    A[0] = 12;
    A[1] = 11;
    A[2] = 10;
    A[3] = 9;
    A[4] = 8;
    cout << sizeof(A) << endl;
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    int B[6] = {5, 4, 3, 2, 1};

    for (int x : B)
    {
        cout << x << endl;
    }
    /*int a;
    for(a=0;a<=5;a++){
        cout<<B[a]<<endl;
    }*/
    int a;
    cout << "Enter size of array: ";
    cin >> a;
    int C[a];
    for (int s : C)
    {
        cout << s << endl;
    }

    return 0;
}