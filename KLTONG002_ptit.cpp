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
        long tong1 = l * (l + 1) / 2;
        long tong2 = r * (r + 1) / 2;
        cout << tong2 - tong1 + l << "\n";
    }
    return 0;
}