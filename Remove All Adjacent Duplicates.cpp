#define ll long long
#include <bits/stdc++.h> 
using namespace std; 
string removeDuplicates(string s) {
   stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(st.empty()) st.push(s[i]);
    else
    {
        if(st.top()==s[i])
            {
            st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
        string ans ="";
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
    return ans;

}

int main()
{  
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s=removeDuplicates( s);
        cout<<s<<endl;
    }
    return 0;
}
