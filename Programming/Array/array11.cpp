#include <iostream>
using namespace std;

int main()
{
    int N, age, userInput;
    string name, fName, Sex;
    cout << "Enter size of array ";
    cin >> N;
    int MobileNo[N];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements in Array " << (i + 1) << ":";
        cin >> userInput;
    }

    return 0;
}