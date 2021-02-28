#include <bits/stdc++.h>
using namespace std;
int knapsack(int w[],int h,int n)
{
  if(h==0||n==0)
  return 0;
  else
  {
    if(w[n-1]<=h)
    {
      return max(w[n-1]+knapsack(w,h-w[n-1],n-1),knapsack(w,h,n-1));
    }
    else if(w[n-1]>h)
    {
      return knapsack(w,h,n-1);
    }
  }
}
int main()
{
  int p=0,n,h,w[1000000],i;
  cin>>n>>h;
  p=h;
  for(i=0;i<n;i++)
  {
    cin>>w[i];
  }
  cout<<p-knapsack(w,h,n);
  return 0;
}
