#include <iostream>
using namespace std;

void Traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void BubbleSort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100] = {7, 5, 9, 2, 17, 4};
    int size = 6;

    Traversal(arr, size);
    BubbleSort(arr, size);
    cout << endl
         << "After sorting\n";
    Traversal(arr, size);
    return 0;
}