#include <bits/stdc++.h>
using namespace std;
int isunique(int x)
{
  int o1=0,o2=0,o3=0,o4=0;
  o1=x%10;
  x=x/10;
  o2=x%10;
  x=x/10;
  o3=x%10;
  x=x/10;
  o4=x%10;
  if(o1==o2||o1==o3||o1==o4||o2==o3||o2==o4||o3==o4)
  return 0;
  else 
  return 1;
}
int main()
{ int n;
cin>>n;
while(n>0)
{ int t,i,p;
cin>>t;
for(i=t+1;i<=9999;i++)
{p=isunique(i);
if(p==1)
break;
}cout<<i<<"\n";
n--;
}
  return 0;
}
