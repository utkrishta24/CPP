#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="";
    int dec,i=0;
    cin >> dec;
    while (dec>=0)
    {
        str[i]=dec%2;
        dec=dec/2;
        i++;
    }
        reverse(str.begin(),str.end());
        cout<<str;
    return 0;

}