#include <iostream>
using namespace std;

int Binary_Search(int arr[], int size, int element);
void Traversal(int arr[], int n);

void Traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int Binary_Search(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = high - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88};
    int size = sizeof(arr) / sizeof(int);
    int element = 22;

    Traversal(arr, size);
    int SearchIndex = Binary_Search(arr, size, element);
    if (SearchIndex == -1)
    {
        cout << endl
             << "Element Not Found";
    }
    else
    {
        cout << endl
             << " Element " << element << " Found at " << SearchIndex << " position";
    }
    return 0;
}