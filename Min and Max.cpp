#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{
  int n,i,a[100000000],m,x;
  cin>>n;
  for( i=0;i<n;i++)
  {cin>>a[i];}
   m=a[0],x=a[0];
   for( i=0;i<n;i++)
  {
    if(a[i]>x)
    x=a[i];
    if(a[i]<m)
    m=a[i];
  }
  cout<<m<<" "<<x<<"\n";
  t--;
}
  return 0;
}
