#include <iostream>
using namespace std;

int sum = 0;
int Reverse_digit(int n)
{
    // base case
    if (n == 0)
        return 0;

    cout << n % 10;
    Reverse_digit(n / 10);
}

int main()
{
    int n;

    cout << "Enter number\n";
    cin >> n;

    Reverse_digit(n);
    return 0;
}
