#include <bits/stdc++.h>
using namespace std;
bool isprime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}  
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int n,a[1000000],i,m=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    while(m<n)
    {
      for(i=0;i<n;i++)
      {
        if(a[i]!=0&&isprime(a[i]))
        {
          cout<<i+1<<" ";
          a[i]=0;
          m++;
        }
        else 
        {  if(a[i]!=0)
            a[i]++;
        }
      }
    }
    cout<<"\n";
    t--;
  }
  return 0;
}
