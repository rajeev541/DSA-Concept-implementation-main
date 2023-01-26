#include <iostream>
using namespace std;

void Print(int n)
{
    // base case
    if (n == 0)
        return;

    cout << n << "\t";
    Print(n - 1);
}

int main()
{
    int n;
    cout << "entrer number \n";
    cin >> n;

    Print(n);

    return 0;
}