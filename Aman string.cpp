#include<bits/stdc++.h>
using namespace std;

int main(){

  int test;
  cin>>test;

  while(test--){

    char a[100000];
    cin>>a;

    int count = 0;

      for(int i=0; i<strlen(a); i++){
        int index = -1;
        for(int j=i; j+3<strlen(a); j++){
          if(a[j]=='a' && a[j+1]=='m' && a[j+2]=='a' && a[j+3] == 'n'){
            index = j-i;
            break;
          }
        }

        if(index != -1)
          count += strlen(a) - ( i + 3 + index  );

      }

    cout<<count<<endl;
  }

}
