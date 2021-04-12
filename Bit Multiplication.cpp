#include <bits/stdc++.h>
using namespace std;
int fun(int l,int r)
{
  if(l==r)
  return l;
  else
  return(l&fun(l+1,r));
  return 0;
}
int main()
{
  int l,r;
  cin>>l>>r;
  cout<<fun(l,r);
  return 0;
}
