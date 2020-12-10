#include <bits/stdc++.h>
using namespace std;
int main()
{int n,r,s=0;
cin>>n;
while(n>0)
{r=n%10;
s+=r;
n/=10;
}cout<<s<<"\n";
  return 0;
}
