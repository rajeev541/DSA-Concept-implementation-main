#include <iostream>
using namespace std;

int Power(int n);

int Power(int n)
{
    // base case
    if (n == 0)
        return 1;

    int SmallerProblem = Power(n - 1);
    int BiggerProblem = 2 * SmallerProblem;

    return BiggerProblem;
}

int main()
{
    int n;
    cout << "Enter power\n";
    cin >> n;

    int ans = Power(n);
    cout << ans;
    return 0;
}