#include <bits/stdc++.h>
using namespace std;
int t;
int n;
void number(int n)
{
    int d[501];
    memset(d, 0, sizeof(d));
    d[0] = 1;

    for (int i = 0; i <= 9; ++i)
    {
        int power = pow(2, i);
        for (int j = power; j <= n; ++j)
            d[j] = d[j] + d[j - power];
    }
    cout << d[n] << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        vector<int> s;
        cin >> n;
        number(n);
    }
    return 0;
}