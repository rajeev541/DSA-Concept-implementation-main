#include <iostream>
using namespace std;

void Traversal(int arr[], int n);
int DeletionArray(int arr[], int size, int index);

void Traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int DeletionArray(int arr[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 0;
}
int main()
{
    int arr[100];
    int size, cap = 100, index = 2;

    cout << "enter size of array\n";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Traversal(arr, size);

    cout << endl
         << "After deletion\n";
    DeletionArray(arr, size, index);
    size = size - 1;
    Traversal(arr, size);
    return 0;
}