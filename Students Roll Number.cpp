#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t>0)
 {
   int n;
   cin>>n;
   int i,a[10000000];
   for(i=0;i<n;i++)
   {cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
     if(i%2==0)
     cout<<a[i]<<" ";
   }cout<<"\n";
   t--;
 }
  
  return 0;
}
