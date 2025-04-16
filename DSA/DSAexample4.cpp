#include <iostream>
using namespace std;

int main()
{
    int Array[6] = {90, 60, 30, 40, 105, 101};
    int NumberOfYear = 0;
    for (int i = 0; i < 6; i++)
    {
        cout << Array[i] << ",";
        if (Array[i] >= 100) // Calculate the Number of years which exceed or equal to 100
        {
            NumberOfYear = NumberOfYear + 1;
        }
    }
    cout << "\nNumber of years which exceed or equal to 100 is: " << NumberOfYear;

    return 0;
}