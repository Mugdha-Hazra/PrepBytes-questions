#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,a[1000000];
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  cout<<a[n/2]-a[n/2 - 1] ;
  return 0;
}
