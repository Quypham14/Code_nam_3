#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dem(ll n)
{
    ll d = 0;
    for (ll i = 2; i <= n; i *= 2)
    {
        d += n / i;
    }
    return d;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << dem(n) << "\n";
    }
}