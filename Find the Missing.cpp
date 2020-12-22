#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{int n,a[100000000],i,c=0,j,s=0;
  cin>>n;
  for(i=1;i<n;i++)
  {cin>>a[i];
    s+=a[i];
    c+=i;
  } c+=n;
  cout<<c-s<<"\n";
  t--;
}return 0;
}
