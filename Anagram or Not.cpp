#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s,a;
    cin>>s>>a;
    sort(s.begin(),s.end());
    sort(a.begin(),a.end());
    if(s==a)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  return 0;
}
