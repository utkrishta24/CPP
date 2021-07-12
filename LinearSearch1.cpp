#include<iostream>
using namespace std;
int Linear(int a[], int n, int x)
{
for(int i=0;i<n;i++)
{
    if(a[i]==x)
    {
        return i;
    }
}
return -1;
}

int main()
{
    int n,x,index;
    cout<<"Length: ";
    cin>>n;
    int a[n];
    cout<<"Array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Element: ";
    cin>>x;
    index=Linear(a,n,x);
    cout<<"Found at: "<<index;
    return 0;
}