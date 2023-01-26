#include<iostream>
using namespace std;

void reachHome(int src,int dest)
{
    cout<<"source "<<src<<" destination "<<dest<<endl;

    if(src == dest)
    {
        cout<<"Phuch gya "<<endl;
        return;
    }

    src++;
    reachHome(src,dest);
}

int main()
{

    int source = 1;
    int destination = 10;
    cout<<endl;

    reachHome(source,destination);
    return 0;
}