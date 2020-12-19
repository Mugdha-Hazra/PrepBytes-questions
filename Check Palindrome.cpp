#include <bits/stdc++.h>
using namespace std;
int palr(int n,int s)
{int r;
  if(n==0)
  return s;
  else
  {
    r=n%10;
    s=(s*10)+r;
    return palr(n/10,s);
  }
}
int main()
{int t;
cin>>t;
while(t>0)
{
  int n,s=0,m,p;
  cin>>n;
  p=n;
  m=palr(n,s);
  if(p==m)
  cout<<"YES\n";
  else
  cout<<"NO\n";
  t--;
}
  return 0;
}
