#include <bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{string s,t;
  cin>>s>>t;
  int i,j,f=0;
   if(s.size()>=t.size())
   {
     for(i=0;i<=s.size()-t.size()&& !f;i++)
     {
       f=1;
       for(j=0;j<t.size();j++)
       {
         if(s[i+j]!=t[j])
         {
           f=0;
           break;
         }
       }
     }
   }
   (f?cout<<"YES\n":cout<<"NO\n");
}
  return 0;
}
