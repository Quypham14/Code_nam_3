#include <bits/stdc++.h>

using namespace std;

bool nguyento(long long n)
{
    if (n < 2)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
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
        if (n <= 4)
            cout << 5 << "\n";
        else
        {
            if (n % 2 == 0)
                n++;
            while (n > 0)
            {
                if (nguyento(n - 2) && nguyento(n))
                    break;
                n += 2;
            }
            cout << n << "\n";
        }
    }
    return 0;
}