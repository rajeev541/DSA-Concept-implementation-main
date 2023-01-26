/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

#include <iostream>
using namespace std;

int main()
{
    int temp = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    return 0;
}