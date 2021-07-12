#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c,n;
    cin>>n;
    c=a+b;
    cout<<a<<" "<<b<<" ";   
    for(int i=0;i<n-2;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
return 0;
}