#include<bits/stdc++.h>
#define ll long long 

using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t-->0)
  {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(j==i|| i+j==n-1)
          a[i][j]=1;
        else 
          a[i][j]=0;
      }
    }
    if(n%2!=0 && n>2)
    {
      int temp=n/2;
      a[temp][temp+1]=1;
      a[temp+1][temp]=1;
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
      cout<<"\n";
    }
  }
  return 0;
}