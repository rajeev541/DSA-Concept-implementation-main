#include <iostream>
using namespace std;

void Print(int arr[], int size)
{
    cout << "size of array " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool LinearSearch(int arr[], int size, int k)
{
    Print(arr, size);
    // base case
    if (size == 0)
        return false;
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        int remainPart = LinearSearch(arr + 1, size - 1, k);
        return remainPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 3, 6, 1};
    int size = 5;
    int key = 1;

    bool ans = LinearSearch(arr, size, key);

    if (ans)
    {
        cout << "Present ";
    }
    else
    {
        cout << "absent";
    }
    return 0;
}