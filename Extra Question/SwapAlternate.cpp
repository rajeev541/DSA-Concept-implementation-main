#include <iostream>
using namespace std;

void Print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int SwapAlternate(int *arr, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // custom implementation
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[100] = {2, 3, 7, 6, 8, 10};
    int size = 6;

    SwapAlternate(arr, size );
    Print(arr, size);
    return 0;
}