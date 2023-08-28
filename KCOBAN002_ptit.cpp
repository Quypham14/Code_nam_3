#include <bits/stdc++.h>
using namespace std;
bool square(long long x)
{
    long long i = sqrt(x);
    return (i * i == x);
}
bool square_number(long long x)
{
    int r;
    bool check = true;
    while (x != 0)
    {
        r = x % 10;
        if (square(r) == false)
            return false;
        x /= 10;
        // k--;
    }
    return true;
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
        int k;
        cin >> k;
        bool check = false;
        long long j = pow(10, k - 1);
        long long top = pow(10, k);
        for (long long q = j; q < top; q++)
        {
            if (square(q) && square_number(q))
            {
                cout << q << "\n";
                check = true;
                break;
            }
        }
        if (check == false)
            cout << -1 << "\n";
    }
    return 0;
}