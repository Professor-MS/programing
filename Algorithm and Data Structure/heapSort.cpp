#include <iostream>
using namespace std;

void insert(int arr[], int &size, int val) // complexity O(log n)
{

    size = size + 1;
    int index = size;
    arr[index] = val;

    while (index > 0)
    {
        int parent = (index - 1) / 2;
        if (arr[parent] < arr[index])
        {

            swap(arr[parent], arr[index]);
            index = parent;
        }
        else
        {
            return;
        }
    }
}
int top(int arr[], int zize)
{
    if (zize == -2)
    {

        cout << "top is zero";
        return 0;
    }
    return arr[0];
}

void deleteheap(int arr[], int &size)
{

    if (size == -1)
    {
        cout << "nothing to delete";
        return;
    }
    // step 1: put last into first element

    arr[0] = arr[size];

    // step 2:delete last by decrementing it so that no one can access it
    size--;

    // step 3: take root to its correct position
    int i = 0;
    while (i < size)
    {
        int leftindex = 2 * i + 1;
        int rightindex = 2 * i + 2;

        if (leftindex < size && arr[i] < arr[leftindex])
        {
            swap(arr[i], arr[leftindex]);
            i = leftindex;
        }
        if (rightindex < size && arr[i] < arr[rightindex])
        {

            swap(arr[i], arr[rightindex]);
            i = rightindex;
        }
        else
        {

            return;
        }
    }
}

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

    int arr[10];
    int size = -1;
    insert(arr, size, 15);
    insert(arr, size, 16);
    insert(arr, size, 19);
    insert(arr, size, 14);
    insert(arr, size, 20);
    print(arr, size);
    deleteheap(arr, size);
    deleteheap(arr, size);

    cout << top(arr, size);
    deleteheap(arr, size);
    deleteheap(arr, size);

    print(arr, size);

    int arr1[6] = {6, 5, 3, 4, 2, 1};
    int n = 6;
    cout << "\nunsorted array" << endl;
    print(arr1, n);
    cout << top(arr1, size);

    heapsort(arr1, n);
    cout << "\nSorted array" << endl;
    print(arr1, n);
    cout << endl;

    cout << top(arr1, size);
    return 0;
}