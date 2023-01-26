#include <iostream>
using namespace std;

void Traversal(int arr[], int n);
int InsertElement(int arr[], int n, int cap, int index);

void Traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
int InsertElement(int arr[], int n, int cap, int index)
{
    int element;
    cout << "Enter new element\n";
    cin >> element;
    if (n >= cap)
    {
        return -1;
    }
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100];
    int size;
    cout << "How many element you want insert\n";
    cin >> size;
    cout << "Enter element\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Traversal(arr, size);

    cout << "After Insertion\n";
    InsertElement(arr, size, 100, 2);
    size++;
    Traversal(arr, size);
    return 0;
}