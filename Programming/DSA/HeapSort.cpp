#include <iostream>
#include <conio.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])

    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])

    {
        largest = right;
    }
    if (largest != i)

    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n)
{
    // build max heap
    for (int i = n / 2 - 1; i > 0; i--)

    {
        heapify(arr, n, i);
    }
    // heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void print(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    int Arr[n] = {3, 5, 4, 2, 1, 6};
    heapsort(Arr, n);
    cout << "Sorted array.";
    print(Arr, n);
    getch();
    return 0;
}