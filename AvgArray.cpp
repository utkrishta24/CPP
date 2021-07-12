#include<iostream>
int main()
{
    int n,sum=0;
    float avg;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    std::cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    std::cout<<avg;
    return 0;
}