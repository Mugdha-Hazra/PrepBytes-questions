/*#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{int p,c=0,i;
  char s[100000000];
  cin>>s;
  p=strlen(s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='a')
    c++;
  }
  if(c>p/2)
  cout<<p;
  else 
 ((2*c)-1>p?cout<<p:cout<<(2*c)-1);
 cout<<"\n";
  t--;
}
  return 0;
}*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{ int n;
cin>>n;
while(n>0)
{
    string t;
    cin >> t;
    cout << min(2*(int)count(t.begin(),t.end(),'a')-1,(int)t.size());
  cout<<"\n";
  n--;
}
return 0;
}
