#include <bits/stdc++.h>
using namespace std;
   vector<int> solve(vector<int>& nums, int k) {
        unordered_map<int,int> numMap;
        for (auto &n : nums) {
            numMap[n]++;
        }

        priority_queue<pair<int,int>> q;
        for (auto &i : numMap) {
            q.push(make_pair(-i.second,i.first));
            if (q.size() > k) q.pop();
        }

        vector<int> result;
        while(!q.empty()) {
            result.push_back(q.top().second);
            q.pop();
        }
        return result;

    }

int main()
{  


  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int x;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      v.push_back(x);

    }
    v=solve(v,k);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
  }

return 0;
}
