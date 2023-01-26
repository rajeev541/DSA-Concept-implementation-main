#include <iostream>
using namespace std;

void printSum(int arr[][3], int n, int m)
{
    cout << "Printing row wise sum " << endl;

    for (int col = 0; col < n; col++)
    {
        int sum = 0;
        for (int row = 0; row < m; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    printSum(arr, 3, 3);
    return 0;
}