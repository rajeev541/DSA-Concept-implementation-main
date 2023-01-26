#include <iostream>
using namespace std;
int factorial(int n);

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    int SmallerProblem = factorial(n - 1);
    int BiggerProblem = n * SmallerProblem;

    return BiggerProblem;
}

int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;

    int ans = factorial(n);
    cout << "factorial is " << ans;
    return 0;
}