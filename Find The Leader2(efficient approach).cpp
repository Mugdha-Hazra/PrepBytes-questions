#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t>0)
  { int i,n,m=0;
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    {  cin>>a[i];}
   for(i=n-1;i>=0;i--)
   {
     if(a[i]>=m)
     {
       cout<<a[i]<<" ";
       m=a[i];
     }
   }
   cout<<"\n";
   t--;
  }
  return 0;
}
