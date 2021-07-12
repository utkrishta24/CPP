#include<iostream>
using namespace std;
 void firstDigit(int n)
 {
     while(n>=10)
     {
         n=n/10;
     }
     cout<<n;
 }

 int main()
 {
     int n;
     cin>>n;
     firstDigit(n);
     return 0;
 }