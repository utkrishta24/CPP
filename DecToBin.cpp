#include<iostream>
using namespace std;
int main()
{
    int a,b[100];
    cin>>a;
    int i=0;
    while(a>0)
    {
        b[i]=a%2;
        i++;
        a=a/2;

    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<b[j]<<" ";
    }
    return 0;
}