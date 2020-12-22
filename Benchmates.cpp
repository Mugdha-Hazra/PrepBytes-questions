#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t>0)
{int n,k,a[100000000],i,c=0;
cin>>n>>k;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
for(i=0;i<n;i++)
{
  if(a[i]==k)
  {c=1;cout<<i;break;}
}if(c==0)
cout<<"-1";
cout<<"\n";
  t--;
}
  return 0;
}
