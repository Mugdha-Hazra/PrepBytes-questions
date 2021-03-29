#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{
  int n,k,s=0,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>k;
     s=s^k;
  }
  cout<<s<<"\n";
}
  return 0;
}
