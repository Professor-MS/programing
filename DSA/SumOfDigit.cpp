#include <iostream>
using namespace std;
int SumofDigit(int num)
{
    int SumDigit = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        SumDigit += lastDigit;
    }
    return SumDigit;
}
int main()
{
    int N;
    cout << "Enter a digit to find there Sum: ";
    cin >> N;
    cout << "Sum of Digit is " << SumofDigit(N);
    return 0;
}