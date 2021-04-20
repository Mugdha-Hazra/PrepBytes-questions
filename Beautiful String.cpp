#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  { int m=0,n=0;
  string a,b;
  cin>>a>>b;
  m=a.length();
  n=b.length();
  if(m!=n)
  cout<<"NO\n";
  else
  {
    sort(a.begin(), a.end());
     sort(b.begin(), b.end());
    if(a.compare(b)==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  }return 0;
}
