#include<iostream>
using namespace std;
int main()
{
    int a,base=1,rem,val=0;
    cin>>a;
    while(a>0)
    {
        rem=a%10;
        val=val+rem*base;
        base=base*2;
        a=a/10;
    }
    cout<<val;
    return 0;
}
