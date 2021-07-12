#include<iostream>
using namespace std;

int main()
{
    int m,n,sum=0;
    cin>>m>>n;
    int arr[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
        cin>>arr[i][j];
}
//original
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
        {cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
}
cout<<"\n";


    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
       {if(i+j==n-1)
       {
           sum=sum+arr[i][j];
       }
        }
        
}
cout<<sum;
return 0;
}