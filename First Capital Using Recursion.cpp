#include <bits/stdc++.h>
using namespace std;
int fc(char s[],int i)
{ //int p=0;
  //p=strlen(s);
  //if(s[i]!='\0')
  {if(s[i]>='A'&&s[i]<='Z')
    return i;
  
  else
    return  fc(s,i+1);}
 
}
int main()
{int t;
cin>>t;
while(t>0)
{char s[100];
int n,i=0;
cin>>s;
n=fc(s,i);
cout<<n<<"\n";
  t--;
}
  
  return 0;
}
