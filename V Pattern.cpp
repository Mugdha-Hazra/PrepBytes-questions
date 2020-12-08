#include <bits/stdc++.h>
using namespace std;
int rev(int x)
{
  int r,s=0;
  while(x!=0)
  {
    r=x%10;
    s=s*10+r;
    x=x/10;
  }
  return s;
}
int main()
{ int i,j,k,t=0,n,p;
char v;
cin>>v;
if(v=='V')
{
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<j;
    }
    for(k=5;k>=j;k--)
    { 
      cout<<"  ";
    }
    for(k=5;k>=j;k--)
    {
      cout<<"  ";
    }
    for(k=1;k<=i;k++)
    {cout<<j-k;
      n++;
    }
    cout<<"\n";
  }
}
return 0;
}
