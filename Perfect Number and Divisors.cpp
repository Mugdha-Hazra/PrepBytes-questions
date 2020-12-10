#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t>0)
{ int n,s=0;
cin>>n;
for(int i=1;i<n;i++)
{
  if(n%i==0)
  s+=i;
}(s==n?cout<<"true\n":cout<<"false\n");
  t--;
}
  return 0;
}
