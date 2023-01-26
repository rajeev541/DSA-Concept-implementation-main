#include <iostream>
using namespace std;

void FindUniqueElement(int arr[], int size);
void Traverse(int arr[], int size);

void Traverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void FindUniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        // Using XOR operation.
        ans = ans ^ arr[i];
    }
    cout << "Unique Element is --> " << ans;
}
int main()
{
    int arr[] = {2, 3, 4, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    cout<<"Elements inside the array\n";
    Traverse(arr,size);
    
    FindUniqueElement(arr, size);

    return 0;
}