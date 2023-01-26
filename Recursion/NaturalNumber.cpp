#include <iostream>
using namespace std;

int Natural(int n)
{

    // base case
    if (n == 0)
        return 1;

    //Print in reverse order.
    cout << n << " ";
    Natural(n - 1);
    // cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    Natural(n);
    return 0;
}