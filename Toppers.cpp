#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t>0)
{int a,b,c,n,ar[1000],i;
cin>>a>>b>>c>>n;
ar[0]=a;
ar[1]=b;
ar[2]=c;
cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" ";
for(i=3;i<n;i++)
{
  ar[i]=ar[i-1]+ar[i-2]+ar[i-3];
  cout<<ar[i]<<" ";
} cout<<"\n";
  t--;
}
  return 0;
}

