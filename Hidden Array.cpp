//Hidden Array
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i=0,j=0,k=0,m=0;
  cin>>n;
  long long int a[100000000],b[100000000],c[100000000]={0};
  while(k<n)
  {
    cin>>a[k]>>b[k];
    k++;
  }
  while(i<n)
  {
    if(a[i]>m)
   { m=a[i];
     j=i;
   }
    i++;
  }
  cout<<m+b[j];
    return 0;
}
