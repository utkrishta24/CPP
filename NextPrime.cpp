#include<iostream>
int main()
{
    int a;
    std::cin>>a;
    for(int i=a+1; ;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                break;
            }
            std::cout<<i;
        break;
        }
        
    }
    return 0;
}