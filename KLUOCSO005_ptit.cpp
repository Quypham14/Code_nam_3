#include <bits/stdc++.h>

using namespace std;

map<long long, int> prime_factors(long long n)
{
    map<long long, int> factors;
    while (n % 2 == 0)
    {
        factors[2]++;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1)
    {
        factors[n]++;
    }
    return factors;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        map<long long, int> factors = prime_factors(n);

        cout << factors.size() << endl;
        for (const auto &factor : factors)
        {
            cout << factor.first << " " << factor.second << endl;
        }
    }
    return 0;
}