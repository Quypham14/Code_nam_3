// Catalan number
#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull calatan(int n)
{
    vector<ull> cala_number(n + 1, 0);
    cala_number[0] = 1;
    cala_number[1] = 1;
    if (n <= 1)
        return 1;
    for (int i = 2; i <= n; ++i)
        for (int j = 0; j < i; ++j)
            cala_number[i] += cala_number[j] * cala_number[i - j - 1];
    return cala_number[n];
}
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
        cout << calatan(n) << "\n";
    }
    return 0;
}