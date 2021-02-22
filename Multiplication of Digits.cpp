#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int mul(long long n,long long mod)
{
  if(n==0)
  return 1;
  else
  return((n%10)%mod*mul(n/10,mod))%mod;
}
int main()
{int t;
cin>>t;
while(t>0)
{
  long long n;
  cin>>n;
  cout<<mul(n,mod)<<"\n";
  t--;
}
return 0;
}
