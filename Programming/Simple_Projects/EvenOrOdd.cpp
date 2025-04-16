#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the Number: " << endl;
    cin >> a;
    if (a % 2 == 0) // if a number is completly divide by 2 and reminder equal to zero then the number should be even, otherwise odd.
    {
        cout << "The number completly divisible by 2 so the number is Even." << endl;
    }
    else
        cout << "The Number is not divisible by 2 so the number is Odd." << endl;
    return 0;
}