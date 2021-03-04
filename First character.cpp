#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;

  while(test--){

    char s[9999];
    cin>>s;

    int hash[26] = {0}, flag=1;

    for(int i=0; i<strlen(s); i++)
      hash[s[i]-'a']++;

    for(int i=0; i<strlen(s); i++)
      if(hash[s[i]-'a']==1){
        cout<<i<<endl;
        flag = 0;
        break;
      }
    if(flag==1)
      cout<<-1<<endl;
  }
}
