#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int t;
int n, k;

int check(int n, int start, long f[])
{
    if (n == 0)
        return 1;
    int ways = 0;
    for (int i = start; i < 2; i++)
    {
        if (f[i] <= n)
        {
            ways += check(n - f[i], i, f);
        }
    }
    return ways;
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
        long f[26];
        f[0] = 1;
        f[1] = 2;
        // for (int i = 0; i <= end; i++)
        //     cout << f[i] << " ";
        cout << check(n, 0, f) << "\n";
    }
    return 0;
}