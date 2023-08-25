#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check_friend(ll a, ll b)
{
    ll count = 1;
    for (ll i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            if (i * i == a)
                count += i;
            else
                count += i + a / i;
        }
    }
    if (count == b)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        ll b;
        cin >> a >> b;
        if (check_friend(a, b) && check_friend(b, a))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}
