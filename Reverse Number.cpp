#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,a[1000],t=0,j;
cin>>n;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
i=0;
j=n-1;
while(j>i)
{
  t=a[i];
  a[i]=a[j];
  a[j]=t;
  i++;
  j--;
}
for(i=0;i<n;i++)
{
  cout<<a[i]<<" ";
}
  return 0;
}
