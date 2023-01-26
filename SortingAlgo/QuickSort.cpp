#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void QuickSort(int arr[], int low, int high)
{
    int partitionIndex;     //Index of pivot after partition.
    if (low < high)
    {
        partitionIndex = Partition(arr, low, high);
        QuickSort(arr, low, partitionIndex - 1);  // Sort Left SubArray.
        QuickSort(arr, partitionIndex + 1, high); // Sort Right SubArray
    }
}

int main()
{
    int arr[100] = {4, 6, 2, 5, 7, 9, 1, 3};
    int size = 8;
    PrintArray(arr, size);

    QuickSort(arr, 0, size - 1);

    cout << endl
         << "After sorting" << endl;
    PrintArray(arr, size);
    return 0;
}