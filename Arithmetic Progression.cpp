#include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    int main(){
        ll n,a;
        cin>>n;
        ll diff[100005]={0},last_value[100005]={0};
        bool b[100005];
        set<ll>s;
        memset(b,false,sizeof(b));
        for(ll i=1;i<=n;i++){
            cin>>a;
            if(!b[a]){
                s.insert(a);
                b[a]=true;
            }
            else{
                if(diff[a]&&(i!=diff[a]+last_value[a])){
                    s.erase(a);
                }
                diff[a]=i-last_value[a];
            }
            last_value[a]=i;
        }
        cout<<s.size()<<endl;
        for(auto it=s.begin();it!=s.end();it++){
            cout<<*it<<" "<<diff[*it]<<endl;
        }
    }
