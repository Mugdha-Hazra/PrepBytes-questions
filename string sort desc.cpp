#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{ string s;
int i,j;
cin>>s;
sort(s.begin(), s.end(), greater<char>()); 
cout<<s<<"\n";
  t--;
}return 0;}
