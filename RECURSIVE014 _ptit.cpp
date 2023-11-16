#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 1e5, inf = 1e+18;
ll t, n, f[N + 5];

void build()
{
    f[1] = 0;
    for (ll i = 2; i <= N; i++)
    {
        f[i] = inf;
        if (i % 2 == 0)
            f[i] = min(f[i], f[i / 2] + 1);
        if (i % 3 == 0)
            f[i] = min(f[i], f[i / 3] + 1);
        f[i] = min(f[i], f[i - 1] + 1);
    }
}

void solve()
{
    cin >> n;
    cout << f[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    build();
    cin >> t;
    while (t--)
        solve();
    return 0;
}
