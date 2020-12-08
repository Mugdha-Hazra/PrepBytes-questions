#include <bits/stdc++.h>
using namespace std;
int main()
{int x,r,s=0;
cin>>x;
while(x>0)
{r=x%10;
s=s*10+r;
x=x/10;
}cout<<s;
  return 0;
}
