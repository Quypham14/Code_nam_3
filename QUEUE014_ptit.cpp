#include<bits/stdc++.h>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		bool check =true;
		if(s1.size()!=s2.size())
		{
			cout<<0<<"\n";
		}
		else
		{
			for(size_t i=0;i<s1.size();++i)
			{
				if(s1[i]!=s2[i])
				{
					check=false;
					break;
				}
			}
			if(check)
			cout<<1<<"\n";
			else 
			cout<<0<<"\n";
		}
	}
	return 0;
}
