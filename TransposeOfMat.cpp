#include<iostream>
using namespace std;

int main()
{
    int m,n;
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
//transpose
for(int j=0;j<n;j++)
{
    for(int i=0;i<m;i++)
       {cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
}
return 0;
}