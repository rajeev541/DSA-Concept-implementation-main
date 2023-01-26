#include<iostream>
using namespace std;

void Traversal(int arr[], int size);
int ReverseArray(int arr[],int start,int end);

void Traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

int ReverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    Traversal(arr,n);
    ReverseArray(arr,0,n-1);
    cout<<endl<<"After reverse Array\n";
    Traversal(arr,n);
    return 0;
}