#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t>0)
{
  int n;
  cin>>n;
   if (((n % 4 == 0) && (n % 100!= 0)) || (n%400 == 0))
      cout<<"Yes";
   else
      cout<<"No";
  cout<<"\n";
  t--;
}
 return 0;
}
