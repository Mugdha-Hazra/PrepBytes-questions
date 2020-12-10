#include <bits/stdc++.h>
using namespace std;

int main()
{ int t,p=0;
cin>>t;
while(t>0)
{ int n;
cin>>n;


  while(n>=1000)
  { n-=1000;
    p++;
  }
  while(n>=500)
  { n-=500;
    p++;
  }
  while(n>=100)
  { n-=100;
    p++;
  }
  while(n>=50)
  { n-=50;
    p++;
  }
  while(n>=20)
  { n-=20;
    p++;
  }
  while(n>=10)
  { n-=10;
    p++;
  }
  while(n>=5)
  { n-=5;
    p++;
  }
  while(n>=2)
  { n-=2;
    p++;
  }
  while(n>=1)
  { n-=1;
    p++;
  }
cout<<p<<"\n";
p=0;
t--;
}
  return 0;
}
