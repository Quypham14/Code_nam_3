#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 1000005;

int largest_prime[MAXN];

void sieve()
{
    for (int i = 2; i < MAXN; i++)
    {
        if (largest_prime[i] == 0)
        {
            for (int j = i; j < MAXN; j += i)
            {
                largest_prime[j] = i;
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
        int n;
        cin >> n;

        ll sum = 0;
        for (int i = 2; i <= n; i++)
        {
            sum += largest_prime[i];
        }

        cout << sum << "\n";
    }

    return 0;
}
