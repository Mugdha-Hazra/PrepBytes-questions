#include <bits/stdc++.h>
using namespace std;

int main()
{int n,t=0,r=0;
cin>>n;
while(n>0)
{
  int p,q;
  cin>>p>>q;
  if(p>q)
  t++;
  else if(q>p)
  r++;
  
  n--;
} 
if(t>r)
cout<<"Pragya\n";
else if(r>t)
cout<<"Tina\n";
else
cout<<"Draw\n";
return 0;
}
