#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=n-1;i>=0;i--)
    {
      int flag=0;
      for(int j=i;j<n;j++)
      {
        if(arr[i]<arr[j])
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
      {
        cout<<arr[i]<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}
