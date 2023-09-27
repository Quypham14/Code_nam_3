// Đường đi ngắn nhất từ vị trí (x,y) đến vị trí đích
#include <bits/stdc++.h>
using namespace std;
int t;
int n, m;
int a[114][114];
int x, y;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];
        cin >> x >> y;
        for (int j = 0; j <= m; ++j)
        {
            a[0][j] = INT_MAX;
            a[n + 1][j] = INT_MAX;
        }
        for (int j = m - 2; j >= 0; j--)
            for (int i = 1; i < n + 1; i++)
                a[i][j] += min(a[i][j + 1], min(a[i + 1][j + 1], a[i - 1][j + 1]));

        cout << a[x][y - 1] << "\n";
    }
    return 0;
}