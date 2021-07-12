#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct CN{
    int x;
    int y;
};


int main()
{
CN a,b;
int R,I;
cin>>a.x>>a.y;
cin>>b.x>>b.y;
R=a.x+b.x;
I=a.y+b.y;
cout<<R<<"+"<<I<<"i";

return 0;
}