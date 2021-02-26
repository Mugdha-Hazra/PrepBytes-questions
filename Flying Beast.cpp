#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
    ll n;
    cin>>n;
    
    ll i,sum=0;
    
    for(i=1;i<n;i++)
    {
      sum+=(i*(n-i));
    }
    
    cout<<sum<<endl;
  }
  
  return 0;
}
