#include <iostream>
using namespace std;

int Unique_Element(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[100] = {3, 7, 2, 2, 7, 3, 4,5,4};
    int size = 9;

    cout<<Unique_Element(arr, size);
    return 0;
}