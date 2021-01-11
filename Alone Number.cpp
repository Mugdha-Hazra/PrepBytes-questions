#include <bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{
  int n,a[1000000],i,j;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  j=1;
  for(i=0;i<n;i=i+2)
  {
    if(a[i]==a[j])
    j+=2;
    else{
      cout<<a[i]<<"\n";
      break;
    }
  }
  t--;
}
  return 0;
}
