#include <bits/stdc++.h>
using namespace std;
int cd(int n)
{ int r,ct=0;
while(n>0)
{r=n%10;
 ct++;
 n/=10;
}return ct;
}
int main()
{ int t;
cin>>t;
while(t>0)
{
  int n,c=0,k,l,s=0,p;
  cin>>n;
  p=n;
  l=n;
  c=cd(p);
  while(n>0)
  {
    k=n%10;
    s+=pow(k,c);
    n=n/10;
  }
  (l==s?cout<<"Yes":cout<<"No");
  cout<<"\n";
  t--;
}
  return 0;
}
