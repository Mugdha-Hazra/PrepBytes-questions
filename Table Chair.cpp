/*#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm>
#include <vector> 
using namespace std; 
using namespace std;
bool comp(long long a, long long b) 
{ 
    return (a < b); 
} 
int main()
{
  long long t,m,r1,r2,r3;
  cin>>t;
  while(t--)
  {
    cin>>m>>r1>>r2>>r3;
    if(m%4==0)
    cout<<"0\n";
    else if((m+1)%4==0)
    cout<<r1<<"\n";
    else if((m+2)%4==0)
    cout<<std::min({r1+r1 ,r2 },comp)<<"\n";
    else if((m+3)%4==0)
    cout<<std::min({r1+r1+r1 , r2+r1 , r3 }, comp)<<"\n";
  }
  return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
 int main()
{long long t,n,r1,r2,r3;
  cin>>t;
  while(t--)
  {
    cin>>n>>r1>>r2>>r3;
    n%=4;
    if(n==0)
    cout<<"0\n";
    if(n==3) cout<<min(r1,min(r2+r3,r3+r3+r3))<<"\n";
    if(n==2) cout<<min(r2,min(r1,r3)*2)<<"\n";
    if(n==1) cout<<min(r3,min(r1+r2,r1+r1+r1))<<"\n";
  }
  return 0;
}
