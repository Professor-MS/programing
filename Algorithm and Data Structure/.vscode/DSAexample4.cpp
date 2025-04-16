#include <iostream>
using namespace std;

int main()
{
    int Array[5] = {100, 200, 300, 400, 500};
    int Num = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << Array[i] << ",";
        if (Array[i] >= 300)
        {
            Num = Num + 1;
        }
    }
    cout << "\nNumber of year exceed 300 is " << Num;

    return 0;
}