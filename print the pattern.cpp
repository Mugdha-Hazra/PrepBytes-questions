#include <bits/stdc++.h>
using namespace std;
void recpattern(int n)
{ cout<<n<<" ";
  if(n<=0)
  return;
 recpattern(n-5);
 cout<<n<<" ";
}
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int n;
    cin>>n;
    recpattern(n);
    cout<<"\n";
    t--;
  }
  return 0;
}
