#include <bits/stdc++.h>
using namespace std;
int isvowel(char ch);
{
int check=0,t;
cin>>t;

while(t--){
check=0;
string data;
cin>>data;
int i=0;
while(i!=data.length())// to check the complete string
{

 if(check==0)//contion when next can be anything
    {
        if(isalpha(data[i]))
            {
                if(isvowel(data[i]))
                    check=0;
                else
                {
                    if(data[i]=='n')
                        check=0;
                    else
                    check=1;
                }
            }
        else
            check=-1;
    }
 else if(check==1)
    {
        if(isvowel(data[i]))
        check=0;
        else
        check=-1;
  
    }
 else if(check==-1)//-1 indicate the string break the rules
        break;
i++;
}
if(check==0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}

return 0;
}
int isvowel(char ch)
{
ch=tolower(ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
return 1;
else
return 0;
}
