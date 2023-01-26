#include<iostream>
using namespace std;

int power(int a,int b)
{
    //base case
    if(b==0)
        return 1;
    
    if(b==1)
        return a;
    
    //Recursive call
    int ans = power(a,b/2);

    //if b is even
    if(b%2==0)
        return ans*ans;
    
    //if b is odd
    else
        return a*ans*ans;
}

int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;

    cout<<"Answer is "<<power(a,b);
    return 0;
}