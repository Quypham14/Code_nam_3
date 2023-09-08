#include <bits/stdc++.h>
using namespace std;
bool prime(long n)
{
    if (n < 2)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}
bool digit_prime(long n)
{
    int r;
    bool digit = true;
    while (n != 0)
    {
        r = n % 10;
        if (!prime(r))
        {
            digit = false;
            break;
        }
        n /= 10;
    }
    if (digit)
        return true;
    return false;
}
int t;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int dem = 0;
        if (n == 1)
            cout << 0 << "\n";
        else
        {
            for (int i = 2; i <= n; i++)
                if (prime(i) && digit_prime(i))
                    dem++;
            cout << dem << "\n";
        }
    }
    return 0;
}