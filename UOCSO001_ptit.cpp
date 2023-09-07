#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll a)
{
    ll count = 0;
    for (int i = 1; i <= a / 2; ++i)
    {
        if (a % i == 0)
            count += i;
    }
    return count;
}
int t;
ll n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << sum(n) << "\n";
    }
    return 0;
}