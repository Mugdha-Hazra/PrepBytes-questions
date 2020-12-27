#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,a[10000],j,p=0,c=0;
cin>>n;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
for(i=0;i<n;i++)
{ c=0;
  for(j=i+1;j<n;j++)
  {
    if(a[i]==a[j])
    {
     // a[i]=0;
      a[j]=0;
      c=1;
    }
  }if(c>0)a[i]=0;
}
for(i=0;i<n;i++)
{if(a[i]>0)
  p++;}
cout<<p<<"\n";
return 0;
}
