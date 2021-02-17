#include<bits/stdc++.h>
using namespace std;
main()
{int t;cin>>t;
  while(t--)
  {
    int n,l,m;
      cin>>n>>l;
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      sort(arr,arr+n);               
      m = max(arr[0],l-arr[n-1])*2;
      for(int i=1;i<n;i++) 
        m = max(m,arr[i]-arr[i-1]);
      cout<<fixed<<setprecision(2)<<m/2.0<<"\n";
  }
}
