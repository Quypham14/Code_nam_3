#include <bits/stdc++.h>
using namespace std;
int t;
int n, k, s;
int a[1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> s;
        int q = s;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        int start = 1;
        int dem = 0;
        while (start <= n - k + 1)
        {
            for (int i = start; i <= start + k-1; ++i)
            {
                s -= a[i];
            }
            if (s == 0)
                dem++;
            s = q;
            start++;
        }
        cout << dem << "\n";
    }
    return 0;
}