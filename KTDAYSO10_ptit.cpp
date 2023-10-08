#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int t;
int n, l;
int invite;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> l;
        ll sum_hope = 0;
        sum_hope = (ll)n * (l + (l + n - 1)) / 2;
        ll sum_real = 0;
        for (int i = 1; i <= n - 1; ++i)
        {
            cin >> invite;
            sum_real += invite;
        }
        cout << sum_hope - sum_real << "\n";
    }
    return 0;
}