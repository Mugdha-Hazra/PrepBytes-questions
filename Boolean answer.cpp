#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{
  int n,m,a[10000][10000],i,j,max=0,c=0,p=0;
  cin>>n>>m;
  for(i=0;i<n;i++)
  { c=0;
    for(j=0;j<m;j++)
    {
      cin>>a[i][j];
      if(a[i][j]==1)
      c++;
    }
    if(c>0&&c>p){ p=c;
    max=i;}
  }(p>0?cout<<max<<"\n":cout<<"-1\n");
  
  t--;
}
  return 0;
}
