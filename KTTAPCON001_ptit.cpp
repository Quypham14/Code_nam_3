#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
int n;
int a[50000];
int b[50000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            b[i] = 1;
        }
        int j = 1;
        for (int i = 1; i <= n - 1; ++i)
        {
            if (a[i] == a[i + 1])
            {
                b[j]++;
            }
            else
            {
                j++;
            }
        }
        ll result = 1;
        for (int i = 1; i <= j; ++i)
        {
            result *= (b[i] + 1);
        }
        cout << result - 1 << " [";
        for (int i = 1; i <= n; ++i)
        {
            cout << a[i];
            if (i <= n - 1)
                cout << ", ";
        }
        cout << "]";
        if (t > 0)
            cout << "\n";
    }
    return 0;
}
