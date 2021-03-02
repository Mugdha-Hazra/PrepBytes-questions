#include <bits/stdc++.h>
using namespace std;

string NextGreater(string str){
  int n = str.size();
  for(int i=n-2; i>=0; i--){
      if(str[i] < str[i+1]){
        sort(str.begin() + i + 1, str.end());
        auto it = upper_bound(str.begin() + i + 1, str.end(), str[i]);
        int index = it - str.begin();
        swap(str[index], str[i]);
        break;
      }
    }
  return str;
}
int main()
{
  int t; cin>>t;
  while(t--){
    string str; cin>>str;
    cout<<"\n"<<NextGreater(str);  
  }
  return 0;
}
