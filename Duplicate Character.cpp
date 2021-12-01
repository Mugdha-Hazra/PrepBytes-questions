#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string unique(string s)
{   string str;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {char c = s[i];
     auto found = str.find(c);
     if (found == std::string::npos) str += c;
    }
    return str;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  { int k=0;
    string s;
    cin>>s;
    int a[1256]={0};
        for(int i=0;s[i]!='\0';i++)
        {
            int p=s[i]-'a';
            a[p]++;
        }
        sort(s.begin(),s.end());
        int n=s.size();
        s=unique(s);
        for(int i=0;s[i]!='\0';i++)
        {  
             int p=s[i]-'a';
           if(a[p]==1)
            {  cout<<"";}
            else{ k=1;
              cout<<s[i]<<"="<<a[p]<<" ";
            }
        }
        if(k==0)
        cout<<"-1";
        cout<<"\n";
  }
}
