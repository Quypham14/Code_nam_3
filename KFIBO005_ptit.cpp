#include <bits/stdc++.h>
using namespace std;

int t;
int n;
int f[26];
int check(int n, int start, int end)
{
    if (n == 0)
        return 1;
    int ways = 0;
    for (int i = start; i <= end; i++)
    {
        if (f[i] <= n)
        {
            ways += check(n - f[i], i + 1, end);
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
    f[0] = 0;
    f[1] = 1;
    while (t--)
    {
        cin >> n;
        int end = 1;

        for (int i = 2; i <= 26; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
            if (f[i] > n)
            {
                break;
            }
            end = i;
        }
        // for (int i = 0; i <= end; i++)
        //     cout << f[i] << " ";
        cout << check(n, 2, end) << "\n";
    }
    return 0;
}