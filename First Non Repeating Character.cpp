#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;cin>>t;
 while(t--)
{
int n;cin>>n;
string s;
cin>>s;
int a[26]={0};
for(int i=0;i<n;i++)
{
  a[s[i]-'a']++;
}
int flag=0;
for(int i=0;i<n;i++)
{
  if(a[s[i]-'a']==1)
  {
    flag=1;
    cout<<s[i]<<"\n";
    break;
  }
}
if(flag==0)
cout<<-1<<"\n";
}
return 0;
}
