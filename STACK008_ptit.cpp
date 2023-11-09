#include<bits/stdc++.h>
using namespace std;
int treatment(string s)
{
	stack<char> mystack;
	int dem=0;
	int c=0;
	for(int i=0;i<s.size();++i)
	{
		if(s[i]=='(')
			mystack.push(s[i]);
		else if(!mystack.empty())
		{
		
			mystack.pop();
		}
		else
		{
			c++;
		}
		dem=mystack.size();
	}
	return c+dem;	
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
		cout<<treatment(a);
		cout<<"\n";
	}
	return 0;
}
