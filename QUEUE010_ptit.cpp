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
		string s;
		cin>>s;
		int ans=INT_MIN;
		string tmp="";
		for(char &c:s)
		{
			if(c==',')
			{
				ans=max(ans,stoi(tmp));
				tmp="";
			}
			else
			{
				tmp+=c;
			}
		}
		ans=max(ans, stoi(tmp));
		cout<<ans<<"\n";
	}
	return 0;
}
