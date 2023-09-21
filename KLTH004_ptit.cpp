#include <bits/stdc++.h>
using namespace std;
int t;
string a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> a;
        cin >> b;
        int size_a = a.size();
        int size_b = b.size();
        int d[size_a + 1][size_b + 1];
        memset(d, 0, sizeof(d));
        for (int i = 1; i <= size_a; i++)
            for (int j = 1; j <= size_b; j++)
            {
                if (a[i - 1] == b[j - 1])
                    d[i][j] = d[i - 1][j - 1] + 1;
                else
                {
                    d[i][j] = max(d[i - 1][j], d[i][j - 1]);
                }
            }
        int result = size_a + size_b - d[size_a][size_b];
        cout << result << "\n";
    }
    return 0;
}