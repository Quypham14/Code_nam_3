#include <bits/stdc++.h>
using namespace std;
int t;
long l, r;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        if (r % 2 == 0)
            r = r - 1;
        if (l % 2 == 0)
            l = l + 1;
        long long ssh1 = (r - 1) / 2 + 1;
        long long tong1 = ssh1 * (r + 1) / 2;
        long long ssh2 = (l - 1) / 2 + 1;
        long long tong2 = ssh2 * (l + 1) / 2;
        cout << tong1 - tong2 + l<< "\n";
    }
    return 0;
}