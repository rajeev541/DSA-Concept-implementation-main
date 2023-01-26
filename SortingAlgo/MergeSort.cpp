#include <iostream>
using namespace std;

void MergeSort(int arr[], int low, int high);
void Merge(int arr[], int low, int mid, int high);
void PrintArray(int arr[], int n);

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void MergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

void Merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int B[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

int main()
{
    int arr[100] = {38, 27, 43, 3, 9, 82, 10};
    int size = 7;

    PrintArray(arr, size);
    cout << endl
         << "After sorting" << endl;
    MergeSort(arr, 0, size-1);
    PrintArray(arr, size);
    return 0;
}