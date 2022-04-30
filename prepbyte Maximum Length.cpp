#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,a[100000];
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>a[i];
}
int c=0,m=0;
for(int i=1;i<n;i++)
{
  if(a[i]>a[i-1])
  {
    c++;
    if(m<c)
    m=c;
    //cout<<"*"<<a[i];
  }
  else
  {
    c=0;
  }
}
cout<<m+1;
  return 0;
}
