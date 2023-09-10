#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime(1000010, true);
void sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= 1000000; ++p)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= 1000000; i += p)
            {
                isPrime[i] = false;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sieve();

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int count = 0;
        for (int i = max(l, 2); i <= r; ++i)
        {
            if (isPrime[i])
            {
                ++count;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
