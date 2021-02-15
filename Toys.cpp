#include <bits/stdc++.h>
using namespace std;
int knapsack(int val[],int wt[],int w,int n)
{
  int i,j,t[n+1][w+1];
  for(i=0;i<n+1;i++)
  {
    for(j=0;j<w+1;j++)
    {
      if(i==0||j==0)
      t[i][j]=0;
    }
  }
  for(i=1;i<n+1;i++)
  {
    for(j=1;j<w+1;j++)
    {
      if(wt[i-1]<=j)
      {
        t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
      }
      else
      {
        t[i][j]=t[i-1][j];
      }
    }
  }
  return t[n][w];
}
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int i,j,n,c,wt[10000],val[10000];
    cin>>n>>c;
    for(i=0;i<n;i++)
    {
      cin>>wt[i];
    }
    for(i=0;i<n;i++)
    {
      cin>>val[i];
    }
    cout<<knapsack(val,wt,c,n)<<"\n";
    t--;
  }
  
  return 0;
}
