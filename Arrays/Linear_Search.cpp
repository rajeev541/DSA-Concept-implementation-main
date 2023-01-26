#include <iostream>
using namespace std;

void Traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int Linear_Search(int arr[], int size, int element)
{
    int count = 0, i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        cout << endl
             << "Element " <<element<<" found at " << i << " position";
    }
    else
    {
        cout << endl
             << "element "<<element<< " Not Found";
    }

    return 0;
}
int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int size = sizeof(arr) / sizeof(int);
    int element = 33;

    Traversal(arr, size);
    Linear_Search(arr, size, element);

    return 0;
}