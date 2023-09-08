#include <bits/stdc++.h>
#define ll long long
using namespace std;
long n;
bool check(long n, vector<ll> &a)
{
    if (n < 2)
        return false;
    ll cong_sai = a[1] - a[0];
    for (long i = 1; i < a.size() - 1; ++i)
        if (a[i + 1] - a[i] != cong_sai)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<ll> a(n);
    for (long i = 0; i < n; ++i)
        cin >> a[i];
    if (check(n, a))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}