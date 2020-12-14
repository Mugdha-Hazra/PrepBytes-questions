#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{int n,i,a[10000000],b[10000000],j=0,c=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i];
  b[j]=a[i];
  j++;}
sort(a,a+n);
j=0;
for(i=0;i<n;i++)
{if(a[i]!=b[j])
   c++;
  j++;
}cout<<c<<"\n";
  t--;
}return 0;
}
