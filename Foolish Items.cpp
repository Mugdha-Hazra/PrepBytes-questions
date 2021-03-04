#include <bits/stdc++.h>
using namespace std;
int main()
{long long int dp[101];
dp[1]=0,dp[2]=1,dp[3]=2,dp[4]=4,dp[0]=0,dp[5]=6,dp[6]=9;
for(int i=7;i<101;i++)
  {long long int mx=-1;
    for(int j=1;j<=i;j++)
    {mx=max(mx,dp[j]*(i-j));
    }dp[i]=mx;
  }
int t;
cin>>t;
  while(t--)
   {int n;
   cin>>n;
   cout<<dp[n]<<"\n";
    }
  return 0;
}
