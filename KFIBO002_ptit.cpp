#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long f[100001];
        f[0] = 1;
        f[1] = 1;
        long i = 2;
        f[i] = f[i - 1] + f[i - 2];
        long long tong = 0;
        while (f[i] <= n)
        {

            if (f[i] % 2 == 0)
                tong += f[i];
            i++;
            f[i] = f[i - 1] + f[i - 2];
        }
        cout << tong << "\n";
    }
    return 0;
}