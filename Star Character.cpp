#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string p="";
    for(int i=0;i<n;i++)
    {  string s;
      cin>>s;
      set<char>st(s.begin(),s.end());
       for(auto& str: st)  p+=str;
      p+="*";
     // p+=st;
    }
    int a[26]={0};
    for(int i=0;i<p.size();i++)
    {
      if(p[i]!='*')
      {
        a[p[i]-'a']+=1;
      }
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
      if(a[i]>=n)
      {
        c++;
      }
    }
    cout<<c<<"\n";
    // cout<<p<<"\n";
  }
  
  return 0;
}

