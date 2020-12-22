#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{ int n,a[100000000],i,c=0;
  cin>>n;
  for(i=0;i<n;i++)
  {cin>>a[i];}
  if(a[0]>a[1])
 { cout<<"0 "; c=1;}
  for(i=1;i<n-1;i++)
  {
    if(a[i]>a[i-1]&&a[i]>a[i+1])
    {cout<<i<<" "; c=1;}
  }
  if(a[n-1]>a[n-2])
 { cout<<n-1<<" "; c=1;}
 if(c==0)
  cout<<"-1";
  cout<<"\n";
  
  t--;
}
  return 0;
}
