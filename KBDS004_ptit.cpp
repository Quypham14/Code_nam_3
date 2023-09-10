#include <bits/stdc++.h>
using namespace std;
int t;
long n;
int k;
vector<long> f;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        f.push_back(0);
        f.push_back(1);

        int j = 1;
        while (f[j] < n)
        {
            j++;
            int a = f[j - 1] + f[j - 2];
            f.push_back(a);
        }
        long d[100][100];
        memset(d, 0, sizeof(d));
        d[0][0] = 1;
        for (int i = 2; i < f.size(); ++i)
            for (int q = f[i]; q <= n; ++q)
                for (int x = 1; x <= k; ++x)
                {
                    d[q][x] = (d[q][x] + d[q - f[i]][x - 1]);
                }
        cout << d[n][k] << "\n";
        f.clear();
    }
    return 0;
}