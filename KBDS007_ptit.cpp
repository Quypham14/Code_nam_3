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
// #include <bits/stdc++.h>
// using namespace std;
// int check(int n)
// {
//     int i = 1;
//     while (pow(2, i) <= n)
//     {
//         i++;
//     }
//     return i - 1;
// }
// long long dem(int n)
// {
//     int dp[n + 1];
//     memset(dp, 0, sizeof(dp));
//     dp[0] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             dp[i] = dp[i - 1] + pow(2, check(i) - 1);
//         }
//         else
//             dp[i] = dp[i - 2] + pow(2, check(i) - 1);
//     }
//     return dp[n];
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << dem(n) << endl;
//     }
//     return 0;
// }