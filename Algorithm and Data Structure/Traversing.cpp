#include <iostream>
using namespace std;

int main()
{
    int N, item;
    cout << "Enter Size of Array: ";
    cin >> N;

    int *LA = new int[N]; // Dynamic memory allocation

    // Element insertion
    cout << "Enter Elements in Array.\n";
    for (int i = 0; i < N; i++)
    {
        cin >> LA[i];
    }

    // Insertion At Beginning in Array
    cout << "Enter element at Beginning: ";
    cin >> item;
    for (int i = N - 1; i >= 0; i--)
    {
        LA[i + 1] = LA[i];
    }
    LA[0] = item;
    N++;

    // Traversing of Array
    cout << "After adding element at beginning to Array is: ";
    for (int i = 0; i < N; i++)
    {
        cout << LA[i] << ",";
    }
    cout << endl;

    // Insertion At Specific Position in Array
    int position, newItem;
    cout << "If you want to Insert at specific Position then Enter Position (1-" << N << "): ";
    cin >> position;
    cout << "Enter your element to insert at " << position << " is ";
    cin >> newItem;
    for (int i = N - 1; i >= position - 1; i--)
    {
        LA[i + 1] = LA[i];
    }
    LA[position - 1] = newItem;
    N++;

    cout << "Your New Array is ";
    for (int i = 0; i < N; i++)
    {
        cout << LA[i] << ", ";
    }
    cout << endl;

    // Insertion at end
    int b;
    cout << "Enter element at the end of array ";
    cin >> b;
    LA[N] = b;
    N++;

    for (int i = 0; i < N; i++)
    {
        cout << LA[i] << ", ";
    }

    delete[] LA; // Deallocate memory
    return 0;
}
