#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printSum(int arr[][3], int n, int m)
{
    int maxi = INT_MIN;
    for (int row = 0; row < n; row++)
    {
        int sum = 0;
        for (int col = 0; col < m; col++)
        {
            sum = sum + arr[row][col];
        }
        if (maxi < sum)
        {
            maxi = sum;
        }
    }
    cout << "largest sum is " << maxi;
}

int main()
{
    int arr[3][3];

    cout << "Enter element " << endl;
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