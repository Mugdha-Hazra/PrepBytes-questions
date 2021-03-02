#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int max_val = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
      sum = 0;
      int j=i;
      while(j<n)
      {
        if(sum+arr[j]<0)
        {
          sum=0;
        }
        else
          sum += arr[j];
        max_val = max(sum,max_val);
        j += k;
      }
    }
    cout<<max_val<<"\n";
  }

  return 0;
}
