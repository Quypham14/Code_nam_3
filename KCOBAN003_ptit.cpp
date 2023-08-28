#include <bits/stdc++.h>
using namespace std;
int t;
long long a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        long dem = 0;
        cin >> a >> b;
        long q = sqrt(a);
        if (q * q != a)
            q++;
        long p = sqrt(b);
        // if (p * p != b)
        //     p++;
        for (long i = q; i <= p; ++i)
        {
            dem++;
        }
        cout << dem << "\n";
    }
    return 0;
}