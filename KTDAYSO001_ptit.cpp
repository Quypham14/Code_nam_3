#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
int n;
bool check(int n, vector<ll> &a)
{
    if (n == 1)
        return true;
    ll cong_sai = a[1] - a[0];
    for (int i = 2; i < n; ++i)
        if (a[i] - a[i - 1] != cong_sai)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> a(n + 1);
        for (long i = 0; i < n; ++i)
            cin >> a[i];
        if (check(n, a))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}
