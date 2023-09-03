#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int t;
long n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> d(3, 0);
        d[0] = 1;
        d[1] = 1;
        for (long i = 2; i <= n; i++)
            d[i % 3] = (d[(i - 1) % 3] + d[(i - 2) % 3]) % mod;
        if (d[n%3] == 0)
            cout << -1 << "\n";
        else
            cout << d[n % 3] % mod << "\n";
    }
    return 0;
}