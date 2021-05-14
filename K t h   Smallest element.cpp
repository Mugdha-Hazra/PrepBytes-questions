#include<bits/stdc++.h>
using namespace std;
int minele(vector<int>v,int n,int k)
{   priority_queue<int,vector<int>,greater<int>>pq;
    int i;
    for(i=0;i<n;i++)
    {pq.push(v[i]);}
    while(--k)
    pq.pop();
    return pq.top();
}int main()
{int t;
cin>>t;
while(t--)
{   vector<int>v;
    int n,i,k;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }
    cout<<minele(v,n,k)<<"\n";
  }  return 0;
}
