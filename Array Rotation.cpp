#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {int p,j,i,n,k,a[9000000],temp,b[9000000];
  cin>>n>>k;
  for(i=0;i<n;i++)
  {cin>>a[i];}
  while(k>0)
  { b[0]=a[n-1];
    for(i=0;i<n-1;i++)
    {
      b[i+1]=a[i];
    }
    for(i=0;i<n;i++)
    {
      a[i]=b[i];
    }
    k--;
  }
 for(i=0;i<n;i++)
  {cout<<a[i]<<" ";}
  cout<<"\n";
    t--;
  }
}
