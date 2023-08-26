#include <bits/stdc++.h>
using namespace std;
int t;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        long f[100001];
        f[0] = 1;
        f[1] = 1;
        for (int i = 2; i <= 100001; ++i)
        {
            f[i] = f[i - 1] + f[i - 2];
            if (f[i] > n)
            {
                if (f[i] - n == 1)
                {
                    cout << f[i] + 1 << "\n";

                    break;
                }
                else
                {
                    cout << n + 1 << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}