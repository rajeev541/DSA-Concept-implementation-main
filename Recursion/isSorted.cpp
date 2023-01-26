#include <iostream>
using namespace std;

bool isSort(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        int sort = isSort(arr + 1, size - 1);
        return sort;
    }
}

int main()
{
    int arr[5] = {2, 3, 4, 5, 7};
    int size = 5;

    bool ans = isSort(arr, size);

    if (ans)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}