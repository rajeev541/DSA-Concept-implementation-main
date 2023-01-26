#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{
    // base case
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;

    if(i*i>n)
        return true;
    // check for next divisor
    return isPrime(n, i + 1);
}

int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;

    if (isPrime(n))
        cout << "yes";
    else
        cout << "No";
    return 0;
}