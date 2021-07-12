#include<iostream>
using namespace std;
int Binary(int a[], int x, int low, int high)
{
    int mid=(low+high)/2;
    if(low>high)
    return -1;
    if(a[mid]==x)
    return mid;
    else if(a[mid]>x)
        return Binary(a,x,low,mid-1);
    else
        return Binary(a,x,mid+1,high);
    return -1;
}
int main()
{
    int n,x,index;
    cout<<"Length: ";
    cin>>n;
    int a[n];
    int low=0,high=n-1;
    cout<<"Array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Element: ";
    cin>>x;
    index=Binary(a,x,low,high);
    cout<<"Found at: "<<index;
    return 0;
}