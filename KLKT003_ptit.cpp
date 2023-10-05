#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll power(ll a, ll b, ll m)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void first_and_last_M_digits(ll N, ll K, ll M)
{
    // Calculate Last M digits
    ll lastM = power(N, K, (1LL) * pow(10, M));
    // Calculate First M digits
    ll firstM;
    double y = (double)K * log10(N * 1.0);
    // Extract the number after decimal
    y = y - (ll)y;

    // Find 10 ^ y
    double temp = pow(10.0, y);

    // Move the Decimal Point M - 1 digits forward
    firstM = temp * (1LL) * pow(10, M - 1);

    // Print the result
    cout << firstM << "\n";
}
int t;
ll N, K, M;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> N >> K >> M;
        first_and_last_M_digits(N, K, M);
    }
    return 0;
}