// #include <bits/stdc++.h>
// using namespace std;
// #define mod 1000000007
// int t;
// long n;
// int event_number(long n, int start, vector<long> &number)
// {
//     if (n == 0)
//         return 1;
//     int way = 0;
//     for (long i = start; i < number.size(); i++)
//         if (n >= number[i])
//             way = (way + event_number(n - number[i], start, number)) % mod;
//     return way % mod;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> t;
//     while (t--)
//     {
//         vector<long> number;
//         cin >> n;
//         if (n % 2 != 0)
//             cout << -1 << "\n";
//         else
//         {
//             for (long i = 2; i <= n; i += 2)
//                 number.push_back(i);
//             cout << event_number(n, 0, number) << "\n";
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int t;
long n;
void number(long n)
{
    long long d[10005];
    memset(d, 0, sizeof(d));
    d[0] = 1;
    for (long i = 2; i <= n; i += 2)
    {
        for (long j = 2; j <= i; j += 2)
            d[i] = (d[i] + d[i - j]) % mod;
    }
    cout << d[n] % mod << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 != 0)
            cout << -1 << "\n";
        else
        {
            number(n);
        }
    }
    return (0);
}