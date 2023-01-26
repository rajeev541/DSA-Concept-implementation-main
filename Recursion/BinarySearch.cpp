#include <iostream>
using namespace std;

void Print(int arr[], int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool BinarySearch(int arr[], int start, int end, int k)
{
    cout << endl;
    Print(arr, start, end);
    // base case

    // element not found
    if (start > end)
        return false;

    int mid = (start + end) / 2;
  
    // Element found
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return BinarySearch(arr, mid + 1, end, k);
    }
    else
    {
        return BinarySearch(arr, start, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 18;

    int ans = BinarySearch(arr, 0, size - 1, key);
    cout << endl
         << "present or Not "<<ans;
    return 0;
}