#include <iostream>
using namespace std;

int main()
{
    int next, first = 0, second = 1, num;
    cout << "____________________________________________" << endl;
    cout << "Enter a Number to find Fibonacii Sequence: ";
    cin >> num;
    cout << "Fibonacii Sequence is: ";
    for (int i = 0; i <= num; i++)
    {
        cout << first << ", ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << "\n____________________________________________" << endl;
    return 0;
}