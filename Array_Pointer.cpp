#include<iostream>
using namespace std;
void fun(int arr[])   //~int *arr..taken as pointer array parameters are treated as pointer 
{
    int n=sizeof(arr)/sizeof(arr[0]); // size of pointer=8/size of int=4
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    fun(arr);
    return 0;
}