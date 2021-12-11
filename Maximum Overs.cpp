#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n%2==0)
  {
    if(n/2<=4)
    cout<<n/2;
    else
    cout<<"4";
  }
  else
  {
    if(n/2 + 1 <= 4)
    cout<<n/2 + 1;
    else
    cout<<"4";
  }
  return 0;
}
