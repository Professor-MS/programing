#include <iostream>
using namespace std;
void Function(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << endl;
    }
}

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    Function(A, 5);
    /*for (int X : A)
     {
         cout << X << " ";
     }
 */
    return 0;
}