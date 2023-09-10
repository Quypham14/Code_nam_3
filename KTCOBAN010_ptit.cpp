#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long power(long long base, long long exp)
{
    if (exp == 0)
        return 1;
    else if (exp % 2 == 0)
    {
        long long half = power(base, exp / 2);
        return (half * half) % mod;
    }
    else
    {
        return (base * (power(base, exp - 1))) % mod;
    }
}
int t;
long a, n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> n;
        cout << power(a, n) << "\n";
    }
    return 0;
}