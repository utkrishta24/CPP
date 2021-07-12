#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c,n,i=0;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while(i<=n)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        i++;
    }
    return 0;
}