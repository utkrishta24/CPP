#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int a1[n][n],a2[n][n],a3[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cin>>a1[i][j];
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cin>>a2[i][j];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
   {
       a3[i][j]=0;
            for(int k=0;k<n;k++)
            {
                a3[i][j]=a3[i][j] + (a1[i][k]*a2[k][j]);
            }
   }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cout<<a3[i][j]<<" ";
    cout<<"\n";
}
return 0;
}