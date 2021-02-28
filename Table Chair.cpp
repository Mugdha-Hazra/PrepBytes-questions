#include <bits/stdc++.h>
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
