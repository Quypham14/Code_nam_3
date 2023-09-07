#include <bits/stdc++.h>
using namespace std;
bool isPerfectNumber(long long n)
{
    if (n <= 1)
    {
        return false;
    }

    long long sum_of_divisors = 1;

    for (long long i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            sum_of_divisors += i;
            if (i != n / i)
            {
                sum_of_divisors += n / i;
            }
        }
    }

    return sum_of_divisors == n;
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
        if (isPerfectNumber(n))
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "0"
                 << "\n";
        }
    }
    return 0;
}
