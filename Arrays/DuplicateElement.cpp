#include <iostream>
using namespace std;

int DuplicateElement(int arr[], int size);
void Traversal(int arr[], int size);

void Traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int DuplicateElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    cout << "Duplicate element is--> " << ans;
    return 0;
}
int main()
{
    int arr[] = {5, 1, 2, 3, 4, 2};
    int size = sizeof(arr) / sizeof(int);

    cout << "Elements inside the array\n";
    Traversal(arr, size);

    cout << endl;
    DuplicateElement(arr, size);
    return 0;
}