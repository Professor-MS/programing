// How to Create array from knowing its size.
#include <iostream>
using namespace std;
int *Function(int size)
{
    int *p;
    int i;
    p = new int(size);
    for (int i = 0; i < size; i++)
        p[i] = i + 1;
    return p;
}
int main()
{

    int *ptr, sizeOfArray = 0;
    cout << "Enter Size of Array to creat an Array equal to the size: ";
    cin >> sizeOfArray;
    ptr = Function(sizeOfArray);
    cout << "Array: [ ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << "]\n";
    system("pause");
    return 0;
}
