#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t; cin>>t;
  while(t--){
    int n, k; cin>>n>>k;
    int arr[n]; 
    for(int i=0; i<n; i++)
      cin>>arr[i];

    long long sum = 0;
    long long curr_time = arr[0] + k;
    for(int i=1; i<n; i++){
      if(curr_time <= arr[i]){
        sum += k;
      }
      else{
        sum += arr[i] - arr[i-1];
      }
      curr_time = arr[i] + k;
    }
    /* adding time for the last punch */
    sum += k;

    cout << sum << endl;
  }
  return 0;
}
