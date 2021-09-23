#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,a[1000000],i,sumr=0,suml=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int index=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==k){
            index=i;
            break;//for first occurrence of k we used break here
        }
        
    }
    if(index==-1){
        cout<<"0\n";
    }
    else{
       for(i=0;i<index;i++)
      {
        suml=suml+a[i];
      }
      for(i=index+1;i<n;i++)
      {
        sumr=sumr+a[i];
      }
     cout<<suml<<" "<<sumr<<endl;
        }
       }
   }
   
