#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    std::cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
           std::cout<<"No";
            return 0;
        }
    }
    std::cout<<"Yes";
    return 0;
}