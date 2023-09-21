#include <bits/stdc++.h>
using namespace std;
#define ll long long
void decimal_to_hexa(ll n)
{
	vector<char> hex_number;
	if (n == 0)
		cout << "0";
	else
	{
		while (n != 0)
		{
			ll temp = n % 16;
			if (temp < 10)
			{
				temp = temp + 48;
				hex_number.push_back(temp);
			}
			else
			{
				temp = temp + 55;
				hex_number.push_back(temp);
			}
			n /= 16;
		}
		for (int j = hex_number.size() - 1; j >= 0; --j)
			cout << hex_number[j];
	}
	cout << "\n";
	hex_number.clear();
}
int t;
int main()
{
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		decimal_to_hexa(n);
	}
	return 0;
}