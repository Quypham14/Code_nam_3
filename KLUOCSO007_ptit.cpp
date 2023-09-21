#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll a, ll b)
{
    if (a >= b && a % b == 0)
        return true;
    return false;
}
int t;
ll n;
ll m;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll sum = 0;
        for (ll i = 1; i <= sqrt(n); ++i)
        {
            if (n % i == 0 && check(m, i) == false)
            {
                sum += i;
                // cout<<i<<" ";
            }
            ll k = n / i;
            if (n % i == 0 && i != k && check(m, k) == false)
                sum += k;
            // cout<<k<<" ";
        }
        cout << sum << "\n";
    }
    return 0;
}