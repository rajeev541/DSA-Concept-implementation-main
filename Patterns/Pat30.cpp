
/*

1 
6 2
10 7 3
13 11 8 4
15 14 12 9 5

*/

#include <iostream>
using namespace std;

int main()
{
    int row, p, k = 1;
    cout << "Enter row = ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        p = k;
        for (int j = 1; j <= i; j++)
        {
            cout << p<<" ";
            p = p - (row - i + j);
        }
        cout << endl;
        k = k + 1 + row - i;
    }
    return 0;
}