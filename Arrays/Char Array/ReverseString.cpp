#include <iostream>
using namespace std;

void Reverse(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << "Enter your name ";
    cin >> name;
    int k = getLength(name);
    cout << "Length is : " << k;
    cout<<endl;

    Reverse(name, k);
    cout << "After reverse your name --> " << name;
    return 0;
}