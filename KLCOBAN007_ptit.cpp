#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, m;
        cin >> n >> k >> m;
        double y = k * log10(n * 1.0);
        y = y - (ll)y;
        double x = pow(10, y);
        cout << (ll)(x * (1LL) * pow(10, m - 1)) << "\n";
    }

    return 0;
}