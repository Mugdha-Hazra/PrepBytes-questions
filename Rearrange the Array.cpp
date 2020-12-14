#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{
  int n,i,a[1000000],p=0,j;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  i=0;j=n-1;p=0;
  while(i<=j)
  {
    if(p==0)
    {cout<<a[j]<<" ";
    j--;
      p=1;
    }
    else
    {
      cout<<a[i]<<" ";
      i++;
      p=0;
    }
  }cout<<"\n";
  t--;
}return 0;
}
