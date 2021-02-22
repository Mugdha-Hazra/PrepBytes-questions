#include <bits/stdc++.h>
using namespace std;
void range(int n)
{
  if(n<=0)
  return ;
  else if(n%2==0)
  {range(n - 2);
   cout<<n<<" ";
  }
  else
   range (n-1);
}
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int n;
    cin>>n;
    range(n);
    cout<<"\n";
    t--;
  }
  return 0;
}
