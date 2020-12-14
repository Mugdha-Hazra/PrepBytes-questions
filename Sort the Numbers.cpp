#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{
  int n,a[10000000],i;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }cout<<"\n";
  t--;
}
  return 0;
}
