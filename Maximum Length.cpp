#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[10000000],c=0,max=0,p=0,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  p=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>p)
    {
      c++;
      if(max<c)
      {
        max=c;
      }
    }
    else
    {
      c=0;
    }
    p=a[i];
  }
  cout<<max+1;
  return 0;
}
