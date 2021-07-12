#include<iostream>
using namespace std;
int main()
{
    int a,b,lcm,max;
cin>>a>>b;
(a<b) ? max=b : max=a;
for(int i= max;i<=(a*b);i++)
{
    if(i%a==0 && i%b==0)
    {
        lcm=i;
        break;
    }
}
cout<<lcm;
return 0;
}