#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<long long>d(n+1,0);
		d[0]=1;
		for(long long i=1;i<=n;++i)
		{
			long long luy_thua=i*i;
			for(long long j=luy_thua;j<=n;++j)
			d[j]=d[j]+d[j-luy_thua];
		}
		cout<<d[n]<<"\n";
	}
	
    return 0;
}
