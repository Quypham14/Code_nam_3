#include<bits/stdc++.h>
using namespace std;
string removedouble(string s)
{
	stack<char>st;
	for(char c:s)
	{
		if(!st.empty()&&st.top()==c)
		{
			st.pop();
		}
		else
		{
		st.push(c);
		}
	}
	string result="";
	while(!st.empty())
	{
		result=st.top()+result;
		st.pop();
	}
	return result;
}
int t;
string a;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,a);
		cout<<removedouble(a);
		cout<<"\n";
	}
	return 0;
}

