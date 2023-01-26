#include <iostream>
using namespace std;

void SwapAlternate(int arr[], int size);
void Traverse(int arr[], int n);

void SwapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {

            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;

            /* OR You can use predefind swap function

                swap(arr[i], arr[i + 1]);
            
            */
        }
    }
}

void Traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[100] = {5, 4, 3, 2, 1, 0};
    int size = 6;

    cout << "Before Swap\n";
    Traverse(arr, size);

    cout << "\nAfter Swap" << endl;
    SwapAlternate(arr, size);
    Traverse(arr, size);

    return 0;
}