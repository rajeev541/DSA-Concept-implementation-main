/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}