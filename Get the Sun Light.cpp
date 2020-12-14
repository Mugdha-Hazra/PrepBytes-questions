#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{int n,i,a[1000000],c=0,j,d=0;
cin>>n;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
//cout<<a[0]<<" ";
d=1;
for(i=1;i<n;i++)
{ c=0;
  for(j=0;j<i;j++)
  {
    if(a[i]<a[j])
    c++;
  }
  if(c==0)
  d++;
  //cout<<a[i]<<" ";
}cout<<d;

  cout<<"\n";
  t--;
}
  return 0;
}
