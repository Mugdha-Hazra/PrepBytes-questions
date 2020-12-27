#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{
  int i, n,k,a[10000000],l=0,m=0,e=0;
  cin>>n>>k;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]<k)
    l++;
    else if(a[i]>k)
    m++;
    else
    e++;
  }
  cout<<l<<" "<<m<<" "<<e<<"\n";
  t--;
}
  return 0;
}
