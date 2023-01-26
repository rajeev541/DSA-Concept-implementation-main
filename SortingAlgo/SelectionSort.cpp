#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void SelectionSort(int arr[], int size)
{
    int indexOfMin, temp;
    for (int i = 0; i < size - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}
int main()
{
    int arr[100] = {3, 5, 2, 13, 12};
    int size = 5;

    PrintArray(arr, size);
    SelectionSort(arr, size);
    cout << endl << "After sorting" << endl;
    PrintArray(arr, size);

    return 0;
}