#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{int e=0,c=0,i;
  char s[100000000];
  cin>>s;
  for(i=0;s[i]!='\0';i++)
  {  if(s[i]=='D'||s[i]=='L')
  {
    e++;
  }
    else if(s[i]=='U'||s[i]=='M')
    {  if(e>0)
        e-=1;
      else
        c++;
    }
  }
 cout<<c*5<<"\n";
  t--;
}
  return 0;
}
