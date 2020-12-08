#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,m=0;
cin>>n;
while(n>0)
{ int t,c, k;
  cin>>t>>c;
  k=c-t;
  if(k>=2)
   m++;
  n--;
}
 cout<<m;
  
  return 0;
}
