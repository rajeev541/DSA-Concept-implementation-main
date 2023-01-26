
/*
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
*/

#include <iostream>
using namespace std;

int main()
{
    int k = 0, x;
    for (int i = 1; i <= 9; i++)
    {
        i < 6 ? k++ : k--;
        x = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - k)
            {
                cout << x;
                x++;
            }
            else
            {
                cout << " ";
                
            }
        }
        cout << endl;
    }
    return 0;
}