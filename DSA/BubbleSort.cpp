#include <iostream>
using namespace std;
void BubbleSort(int Array[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        for (int j = 0; j < sizeOfArray - i - 1; j++)
        {
            if (Array[j] > Array[j + 1])
            {
                swap(Array[j], Array[j + 1]);
            }
        }
    }
}

void PrintArray(int Array[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "\n"
             << Array[i] << ", ";
    }
}

void insertSort(int Array[], int sizeOfArray)
{

    for (int i = 1; i < sizeOfArray; i++)
    {
        int current = i;
        int previous = i - 1;

        while (previous >= 0 && Array[previous] > Array[current])
        {

            Array[previous + 1] = Array[previous];
            previous--;
        }
        Array[previous + 1] = current;
    }
}

void SelectSort(int Array[], int sizeOfArray)
{

    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            if (Array[j] < Array[small])
            {
                small = j;
            }
        }
        swap(Array[i], Array[small]);
    }
}

int main()
{
    int ArraySize = 5;
    int Array[ArraySize] = {5, 4, 3, 2, 1};
    // BubbleSort(Array, ArraySize);
    // SelectSort(Array, ArraySize);
    insertSort(Array, ArraySize);
    PrintArray(Array, ArraySize);
    cout << endl;
    system("pause");
    return 0;
}