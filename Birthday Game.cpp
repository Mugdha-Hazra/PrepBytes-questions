#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000000],i,d,m,b[1000000],s=0,p=0;
  cin>>n;
  b[0]=0;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    //s+=a[i];
    b[i + 1]=b[i]+a[i];
     //s+=a[i];
    //cout<<"*"<<b[i];
  }
  cin>>d>>m;
  for(i=0;i<=(n-m);i++)
  {
    if(b[i+m]-b[i]==d)
    p++;
  }
  cout<<p<<"\n";
  return 0;
}
