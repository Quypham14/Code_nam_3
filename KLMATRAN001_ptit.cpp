#include <bits/stdc++.h>
using namespace std;
int t;
int n, m;
int a[1000][1000];
int d[1000][1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        for (int i = 0; i <= n + 1; i++)
            for (int j = 0; j <= m + 1; j++)
                d[i][j] = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                d[i][j] = a[i][j] + max(d[i - 1][j - 1], max(d[i - 1][j], d[i - 1][j + 1]));

        int result = 0;
        for (int j = 1; j <= m; ++j)
            result = max(result, d[n][j]);

        cout << result << "\n";
    }
    return 0;
}
