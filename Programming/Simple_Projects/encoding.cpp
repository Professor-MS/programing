#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    char ch[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the " << i + 1 << " character";
        cin >> ch[i];
        cout << endl;
        cout << "Enter the " << i + 1 << " code";
        cin >> arr[i];
    }
    cout << endl;
    int code[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter your sifer ch code" << i + 1<<" = ";
        cin >> code[i];
    }
    cout << endl;
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (code[j] == arr[k])
            {
                cout << ch[k] << endl;
            }
        }
    }
    return 0;
}