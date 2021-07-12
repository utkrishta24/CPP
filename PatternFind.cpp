#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
 string str,pat;
 cin>>str>>pat;
 int find=str.find(pat);
 while(find!=string::npos)
 {
     cout<<"String Found at "<<find<<endl;
     find=str.find(pat,find+1);
 }
    return 0;
}