#include <bits/stdc++.h>
using namespace std;
int main()
{ int n,m,i,j,a[1000][1000];
cin>>n>>m;
for(i=1;i<=n;i++)
{
  for(j=1;j<=m;j++)
  {
    cin>>a[i][j];
  }
}
for(j=1;j<=m;j++)
{
  for(i=n;i>0;i--)
  {
    cout<<a[i][j]<<" ";
  }cout<<"\n";
}

  
  return 0;
}
