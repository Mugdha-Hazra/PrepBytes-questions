#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{
  int n,x=0;
  cin>>n;
  x=n%8;
  if(x==0)
  cout<<n-1<<"SL";
  else if(x==1)
  cout<<n+3<<"LB";
  else if(x==2)
  cout<<n+3<<"MB";
  else if(x==3)
  cout<<n+3<<"UB";
  else if(x==4)
  cout<<n-3<<"LB";
  else if(x==5)
  cout<<n-3<<"MB";
  else if(x==6)
  cout<<n-3<<"UB";
  else if(x==7)
  cout<<n+1<<"SU";
  cout<<"\n";
  t--;
}
  return 0;
}
