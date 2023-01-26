#include <iostream>
using namespace std;

int N_Odd(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    N_Odd(n - 1);
    if (n % 2 == 0)
        cout << " ";
    else
    {
        cout << n;
    }
}

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    N_Odd(n);
    return 0;
}