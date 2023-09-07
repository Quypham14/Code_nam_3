#include <bits/stdc++.h>
using namespace std;
long is_Prime(long a)
{
    long dem = 0;
    long prime[a];
    for (long i = 2; i <= a; i++)
        prime[i] = 1;
    for (long i = 2; i <= a; i++)
    {
        if (prime[i] == 1)
            for (long j = 2 * i; j <= a; j += i)
            {
                prime[j] = 0;
            }
    }
    for (long i = 2; i <= a; i++)
    {
        if (prime[i] == 1 && a % i == 0)
            dem++;
    }
    return dem;
}
int t;
long n;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << is_Prime(n) << "\n";
    }
    return 0;
}