#include <iostream>
using namespace std;

bool CheckPalindrome(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (name[start] != name[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
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
    int len = getLength(name);

    cout << "Palindrome or Not:" << CheckPalindrome(name, len)<<endl;;

    return 0;
}