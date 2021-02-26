#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    int i,u=0,d=0,p;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]=='U')
         u++;
      else
      d++;
    }// cout<<u<<d;
    p=s.size();
    if(d==u)
    cout<<"0\n";
    else 
      (u<(p/2)?cout<<(p/2)-u<<"\n":cout<<(p/2)-d<<"\n");
  }
  return 0;
}
