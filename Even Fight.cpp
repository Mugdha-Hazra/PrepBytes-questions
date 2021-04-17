#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,i,a[1000000],o=0,e=0,c=0,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]%2==0)
      o++;
      else
      e++;
    }
    if(o==n||e==n)
    cout<<"0\n";
    else
    {
    for(i=0;i<n;i++)
    {
      if(a[i]%2==0)
      { p=a[i];
        while(p!=1)
        {if(p%2==1)
          break;
         else
          {c++;
          p=p/2;}
        }
      }
    }
    cout<<c<<"\n";
    }
  }
  return 0;
}
