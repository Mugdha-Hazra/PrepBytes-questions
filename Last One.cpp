#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{
  int i, n,a[10000000];
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  for(i=n;i>0;i--)
  {
    if(a[i]==1)
    break;
  }
  cout<<i-1<<"\n";
  t--;
}
  return 0;
}
