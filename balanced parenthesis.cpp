// balanced parenthesis 
#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string st)
{
	stack<char> s;
	char x;
	for(int i=0;i<st.length();i++)
	{
		if(st[i]=='{'||st[i]=='['||st[i]=='(')
		{
			s.push(st[i]);
			continue;
		}
		if(s.empty())
		{
			return false;
		}
		switch(st[i])
		{
			case ')':
				x=s.top();
				s.pop();
				if(x=='}'||x==']')
				return false;
				break;
			case ']':
				x=s.top();
				s.pop();
				if(x=='}'||x==')')
				return false;
				break;
			case '}':
				x=s.top();
				s.pop();
				if(x==')'||x==']')
				return false;
				break;
		}
	
	}
		return (s.empty());
	
}
int main()
{
	string s;
	cin>>s;
	if(isBalanced(s))
	cout<<"Valid\n";
	else
	cout<<"Not valid\n";
	return 0;
}
