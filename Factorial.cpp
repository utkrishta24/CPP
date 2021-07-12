#include<iostream>
int main()
{
int n, fact=1;
std::cin>>n;
if(n==0)
std::cout<<"1";
else{
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    std::cout<<fact;
}
return 0;
}
