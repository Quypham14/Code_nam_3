#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	while (n != 0)
	{
		if (n >= 100)
		{
			n -= 100;
			dem++;
		}
		else if (n >= 20)
		{
			n -= 20;
			dem++;
		}
		else if (n >= 10)
		{
			n -= 10;
			dem++;
		}
		else if (n >= 5)
		{
			n -= 5;
			dem++;
		}
		else
		{
			n -= 1;
			dem++;
		}
	}
	cout << dem;
	return 0;
}
