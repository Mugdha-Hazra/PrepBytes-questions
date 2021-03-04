#include <bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int start)
{
  int res = 0;
  for(int i=start;i<n;i+=2)
  {
    int to = arr[i];
    if(i){
    // make sure current element is less than its left neighboor
      to = min(to,arr[i-1]-1);
    }
    if(i+1 != n){
    // make sure current element is less than its right neighboor
      to = min(to,arr[i+1]-1);
    }
    // if curr value was decreased to "to", add the difference
    res += arr[i] - to;
  }
  return res;
}

int main()
{
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

  cout<<min(solve(arr,n,0),solve(arr,n,1));

  return 0;
}
