#include <bits/stdc++.h>
    using namespace std;

    int main()
    {
      int test;
      cin>>test;

      while(test--){

          int N, R;
          cin>>N>>R;

          char a[N];
          cin>>a;

          int pairSize = 2*(R - 1);
          if(pairSize == 0)
            pairSize=1;
          for(int i=0; i<=pairSize/2; i++){

            for(int j=0; j<(N/pairSize)+1; j++){

              int pos = i+(pairSize*j);
              int revPos = (pairSize - i) + pairSize*j; 
              if( ((pos%pairSize)==0 || (pos+(pairSize/2))%pairSize == 0 ) && pos < N)
                  cout<<a[(i + pairSize*j)];
              else{
                  if( pos < N )
                    cout<<a[pos];
                  if( revPos < N )
                    cout<<a[revPos];
              }

            }

          }

          cout<<endl;

      }

      return 0;
    }
