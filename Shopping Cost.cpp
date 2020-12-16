#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
while(n>0)
{float p,q,r,m;
cin>>q>>p;
if(q>100)
{r=(p*0.2*q);
m=p*q-r;
cout<<fixed<<setprecision(1)<<m<<endl; }
else
{r=p*q;
cout<<fixed<<setprecision(1)<<r<<endl; 
} n--;}
return 0;
}
