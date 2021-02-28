#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000000],i,c=0,j;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int f[1000001]={0};
  for(i=0;i<n;i++)
  {   int val=0;
    for(j=1;j<=sqrt(a[i]);j++)
    {
      if(a[i]%j==0)
      {
        if(j==a[i]/j)
        {
          val+=f[j];
        }
        else
        {
          val+=f[j];
          val+=f[a[i]/j];
        }
      }
    }
    cout<<val<<" ";
    f[a[i]]++;
  }
  return 0;
}
