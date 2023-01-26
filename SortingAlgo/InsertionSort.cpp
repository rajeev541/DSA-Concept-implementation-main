#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size);
void Traversal(int arr[], int size);

void Traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void InsertionSort(int arr[], int size)
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        // Loop for each passes
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[100] = {7, 5, 9, 2, 17, 4};
    int size = 6;

    Traversal(arr, size);
    InsertionSort(arr, size);
    cout << endl
         << "After sorting\n";
    Traversal(arr, size);
    return 0;
}