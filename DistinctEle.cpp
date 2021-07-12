#include<iostream>
int main()
{
    int count=0,n;
    bool dis=true;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    std::cin>>a[i];
    for(int i=0;i<n;i++)
    {
         dis=true;
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]==a[i])
                {
                    dis=false;
                    break;
                }
        }
        if(dis==true)
        count++;
    }
    std::cout<<"Count: "<<count;
    return 0;
}