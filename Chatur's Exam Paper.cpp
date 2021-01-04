#include <bits/stdc++.h>
using namespace std;
int theLoveLetterMystery(string s) 
{
    int n=s.length();
    int sum=0;
    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-i-1])
            sum+= abs(s[i]-s[n-i-1]);
    return sum;
}
int main()
{ int t;
cin>>t;
while(t>0)
{
  string s;
  cin>>s;
  cout<<theLoveLetterMystery(s)<<"\n";
  t--;
}
  return 0;
}
