#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	int a[35];
	int b[35];
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i]>>b[i];
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
	if(a[i]==b[j])
	dem++;
	}
	cout<<dem;
	return 0;
}
