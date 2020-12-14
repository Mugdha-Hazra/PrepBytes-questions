#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{
  int n,i,c=0;
  cin>>n;
  if(n==2)
  cout<<"Yes\n";
  else if(n==1)
  cout<<"No\n";
  else
  {for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      c++;
      cout<<"No\n";
      break;
    }
  }if(c==0)
  cout<<"Yes\n";}
  t--;
}
  return 0;
}
