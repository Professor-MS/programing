#include <iostream>
using namespace std;

int Arr[] = {7, 3, 5, 11, 9, 10, 2};

// Partition function that divides the array based on the pivot value
int Partition(int LB, int UB)
{
    int pivot = Arr[LB]; // Choosing the first element in the range as the pivot
    int Start = LB;      // Start pointer at the beginning of the array section
    int end = UB;        // End pointer at the end of the array section

    // Loop to rearrange elements based on pivot value
    while (Start < end)
    {
        // Move Start forward until finding an element larger than pivot
        while (Arr[Start] <= pivot && Start < end)
        {
            Start++;
        }

        // Move end backward until finding an element less than or equal to pivot
        while (Arr[end] > pivot)
        {
            end--;
        }

        // Swap elements if Start is still less than end
        if (Start < end)
        {
            swap(Arr[Start], Arr[end]); // Swap out-of-place elements
        }
    }

    // Place pivot element in its correct position
    swap(Arr[LB], Arr[end]);
    return end; // Return the index of the pivot element
}

// QuickSort function that sorts the array recursively
void QuickSort(int LB, int UB)
{
    // Check if the array section has more than one element
    if (LB < UB)
    {
        // Partition the array and get the pivot index
        int pivotIndex = Partition(LB, UB);

        // Recursively sort the left subarray
        QuickSort(LB, pivotIndex - 1);

        // Recursively sort the right subarray
        QuickSort(pivotIndex + 1, UB);
    }
}

int main()
{
    int n = sizeof(Arr) / sizeof(Arr[0]); // Calculate the number of elements in the array

    // Display the array before sorting
    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    QuickSort(0, n - 1); // Sort the entire array from index 0 to n-1

    // Display the array after sorting
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}
