#include <iostream>
using namespace std;
int FibonacciSeries(int number)
{

    if (number == 0 || number == 1)
    {
        return number;
    }
    return FibonacciSeries(number - 1) + FibonacciSeries(number - 2);
}

int main()
{
    int number;
    cout << "Enter a Number to Find Fibonacci Series: ";
    cin >> number;
    cout << "Fibonacci Sequence for " << number << " is: " << FibonacciSeries(number);
    cout << endl;
    system("pause");
    return 0;
}