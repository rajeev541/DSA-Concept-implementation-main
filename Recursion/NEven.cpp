#include <iostream>
using namespace std;

int N_Even(int n)
{
    // base case
    if (n == 0)
        return 1;

    N_Even(n - 1);
    if (n % 2 == 0)
    {
        cout << n << " ";
    }
    
}

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    N_Even(n);
    return 0;
}