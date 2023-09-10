#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
int n;
int m;
vector<vector<ll>> dp;
ll power(int base, int exp)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

ll treatment(int m, int first, vector<ll> &d)
{
    if (m == 0)
        return 1;
    if (first >= d.size() || m < 0)
        return 0;
    if (dp[m][first] != -1)
        return dp[m][first];
    ll way = treatment(m - d[first], first + 1, d) + treatment(m, first + 1, d);
    dp[m][first] = way;
    return way;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        vector<ll> d;
        int next = 1;
        while (power(next, n) <= m)
        {
            d.push_back(power(next, n));
            next++;
        }
        dp.assign(m + 1, vector<ll>(d.size(), -1));
        cout << treatment(m, 0, d) << "\n";
    }

    return 0;
}