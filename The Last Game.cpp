#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t>0)
{ int n,a[100000],i,p=0,s=0;
  cin>>n;
  for(i=0;i<n;i++)
  {cin>>a[i];}
  sort(a,a+n);
  if(n==1)
  cout<<a[0]<<"\n";
  else if(n==2)
  cout<<a[0]<<"\n";
 else if(n%2==0&&n!=2)
 {
   cout<<a[n/2 - 1]<<"\n";
 }
 else
 {
   cout<<a[n/2]<<"\n";
 }t--;
  }
return 0;
}
