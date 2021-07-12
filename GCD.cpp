#include<iostream>
using namespace std;
int main()
{
int a,b,gcd,min;
cin>>a>>b;
(a>b) ? min=b : min=a;
for(int i= min;i>=1;i--)
{
    if(a%i==0 && b%i==0)
    {
        gcd=i;
        break;
    }
}
cout<<gcd;
return 0;
}