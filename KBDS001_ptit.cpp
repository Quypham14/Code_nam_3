#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
void number()
{
    int n;
    cin >> n;
    int d[100001];
    memset(d, 0, sizeof(d));
    d[0] = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i; j <= n; j++)
            d[j] = (d[j] + d[j - i]) % mod;
    }
    cout << d[n] % mod << "\n";
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
        number();
    }
    return 0;
}