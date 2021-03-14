#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{ int n,k,i,j,ken=0,ama=0,a[1000000],b[1000000];
  cin>>n>>k;
  //int a[n],b[n];
  for(i=0;i<n;i++)
  {cin>>a[i];}
  for(j=0;j<n;j++)
  {cin>>b[j];}
  sort(a,a+n);
  sort(b,b+n,greater<int>());
  for(i=0;i<k;i++)
  {ken+=a[i];}
  for(j=0;j<k;j++)
  {ama+=b[j];}
  (ken>ama?cout<<"WIN\n":cout<<"LOSE\n");
}return 0;}
