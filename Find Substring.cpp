 #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
      int test;
      cin>>test;

      while(test--){

        char a[1001], b[1001];
        cin>>a>>b;

        bool found = false;

        if(strlen(a)>=strlen(b)){

            for(int i=0; i<=strlen(a)-strlen(b) && !found; i++){

              found = true;

              for(int j = 0; j<strlen(b); j++){

                  if( a[i+j] != b[j] ){
                      found = false;
                      break;
                  }

                }
            }
        }

        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";


      }

      return 0;
    }
