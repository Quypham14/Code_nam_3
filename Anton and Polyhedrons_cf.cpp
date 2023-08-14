#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	long tong=0;
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="Icosahedron")
		tong+=20;
		else if(s=="Dodecahedron")
		tong+=12;
		else if(s=="Octahedron")
		tong+=8;
		else if(s=="Cube")
		tong+=6;
		else tong+=4;
	}
	cout<<tong;
	return 0;
}
