#include<bits/stdc++.h>
using namespace std;
int maxbook(vector<int>v,int n,int k)
{   priority_queue<int,vector<int>,greater<int>>pq;
    int i,c=0;
    for(i=0;i<n;i++)
    {pq.push(v[i]);}
    
    while(k>=0)
    {k-=pq.top();
    c++;
    pq.pop();
    }
    return c;
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
    cout<<maxbook(v,n,k)-1<<"\n";
  }  return 0;
}
