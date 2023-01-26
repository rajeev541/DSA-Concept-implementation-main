#include <iostream>
using namespace std;

int fib(int n)
{
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int fib1 = fib(n - 1);
    int fib2 = fib(n - 2);

    int ans = fib1 + fib2;
    // ans = fib(n-1)+fib(n-2);

    return ans;
}

int main()
{
    int n;
    cout << "How many fib term you want\n ";
    cin >> n;

    cout << fib(n);

    return 0;
}