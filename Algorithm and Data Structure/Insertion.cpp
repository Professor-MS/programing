#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter Size of Array: ";
    cin >> N;
    int LA[N];
    // int LA[]={0,2,4,6,8};
    for (int i = 0; i < N; i++)
    {
        cin >> LA[i]; // 0,2,4,6,8,
    }
    int ITEM;
    cout << "Enter Item to Insert at Beginning: ";
    cin >> ITEM;
    for (int J = N - 1; J >= 0; J--)
    {
        LA[J + 1] = LA[J];
    }
    LA[0] = ITEM;
    N = N + 1;
    cout << "Updated Array Size: " << N << endl;
    for (int i = 0; i < N; i++)
    {
        cout << LA[i] << endl;
    }

    return 0;
}
