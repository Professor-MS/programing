#include <iostream>
using namespace std;

int main()
{
    int N;
    int count = 1, sum = 0;
    cout << "Enter A number to find the sum upto Number. " << endl;
    cin >> N;

    while (count <= N)
    {
        sum += count; // sum=sum+count;
        count += 1;   // count=count+1;
    }
    cout << "Sum of the " << N << " is: " << sum << endl;

    return 0;
}