// #include <bits/stdc++.h>
// #define mod 29
// #define ll long long
// using namespace std;
// ll power(ll base, ll exp)
// {
//     ll result = 1;
//     while (exp > 0)
//     {
//         if (exp % 2 == 1)
//         {
//             result *= base;
//         }
//         base *= base;
//         exp /= 2;
//     }
//     return result;
// }
// int t;
// int main()
// {
//     cin >> t;
//     while (t--)
//     {
//         long x;
//         cin >> x;
//         ll result = power(2004, x);
//         ll sum = (1 + result) % mod;
//         for (ll i = 2; i <= sqrt(result); ++i)
//             if (result % i == 0)
//             {
//                 sum = (sum + i) % mod;
//                 if (i != result / i)
//                 {
//                     sum = (sum + result / i) % mod;
//                 }
//             }
//         cout << sum << "\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mod = 29;
long long power(long long base, long long exp)
{
    if (exp == 0)
        return 1;
    else if (exp % 2 == 0)
    {
        long long half = power(base, exp / 2);
        return (half * half) % mod;
    }
    else
    {
        return (base * (power(base, exp - 1))) % mod;
    }
}
int t;
ll x;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> x;
        ll sum = 1;
        ll sum1 = (power(2, 2 * x + 1) - 1) % mod;
        ll sum2 = ((power(3, x + 1) - 1)) % mod;
        ll sum3 = ((power(167, x + 1) - 1)) % mod;
        sum *= sum1 * sum2 * sum3 * power(2, mod - 2) * power(166, mod - 2) % mod;
        cout << sum % mod;
        cout << "\n";
    }
    return 0;
}