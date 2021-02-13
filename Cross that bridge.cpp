#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    string s;
    char p;
    int i,n,x=0,y=0,c=0;
    cin>>s;
    n=s.size();
    p=s[0];
    (p=='X'?x++:y++);
    for(i=1;s[i]!='\0';i++)
    {
      if(s[i]!=s[i-1])
      {
        (s[i]=='X'?x++:y++);
        p=s[i];
      
      }
    }
   // cout<<x<<y<<"\n";
    (x<y?cout<<x:cout<<y);
    cout<<"\n";
    t--;
  }
  return 0;
}
