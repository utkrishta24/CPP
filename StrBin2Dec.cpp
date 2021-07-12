#include<iostream>
#include <string.h>
using namespace std;

int main()
{
string str;
int base=1,bin=0;
cin>>str;
for(int i=str.length()-1;i>=0;i--)
{
    bin=bin+ (int)(str[i]-'0')*base;
    base=base*2;
}
cout<<bin;
return 0;

}