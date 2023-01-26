#include<iostream>
using namespace std;

void Traversal_Array(int arr[],int n);

void Traversal_Array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int arr[100];
    int n;

    cout<<"how many element you want to insert"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Element of arrays"<<endl;
    Traversal_Array(arr,n);
    return 0;
}