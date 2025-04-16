#include <iostream>
using namespace std;
/* bool isPrimeNumber(int num)
{
    bool isPrime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
        }
    return isPrime;
} */
// Both Function work the same for return isPrime value true or false.
bool isPrimeNumber(int num)
{
    for (int i = 2; i*i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    bool isPrime = isPrimeNumber(number);
    if (isPrime)
        cout << number << " is Prime number\n";
    else
        cout << number << " is not Prime number\n";
}