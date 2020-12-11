#include <bits/stdc++.h>
using namespace std;
int main()
{int i,j,n,m,k,a[100][100];
cin>>n>>m>>k;
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    cin>>a[i][j];
  }
}
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    cout<<k*a[i][j]<<" ";
  }cout<<"\n";
}cout<<"\n";
  return 0;
}
