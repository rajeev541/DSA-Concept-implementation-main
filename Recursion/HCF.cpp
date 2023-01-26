#include <iostream>
using namespace std;

/* method 1
int HCF(int n1, int n2)
{
    int r;
    // base case
    if (n2 != 0)
        return HCF(n2, n1 % n2);
    else
        return n1;
}
*/

// method 2.
int HCF(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater.
    if (a > b)
        return HCF(a - b, b);
    return HCF(a, b - a);
}
int main()
{
    int n1, n2;

    cout << "Enter Two numbers\n";
    cin >> n1 >> n2;
    cout << "HCF is " << HCF(n1, n2);
    return 0;
}