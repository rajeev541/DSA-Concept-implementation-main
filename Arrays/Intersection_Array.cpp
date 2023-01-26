#include <iostream>
using namespace std;

int Intersection(int arr1[], int arr2[], int n, int m)
{
    int element;
    for (int i = 0; i < n; i++)
    {
        element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                cout << element << endl;
                arr2[j] = -2;
                break;
            }
        }
    }
    return 0;
}
int main()
{
    int arr1[100] = {1, 2, 2, 2, 3, 4};
    int arr2[100] = {2, 2, 3, 3};
    int n = 6;
    int m = 4;

    Intersection(arr1, arr2, n, m);
    return 0;
}