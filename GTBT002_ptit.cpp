#include <bits/stdc++.h>
using namespace std;
int i, n;
float x, S, T;
unsigned long long M;
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> x;

        M = 1;
        S = 0.0;
        T = 1.0;
        i = 1;
        while (i <= n)
        {
            T *= x;
            M *= i;
            S += T / M;
            i++;
        }
        cout << fixed << setprecision(3) << S << " \n";
    }
    return 0;
}

// x^k=x^(k-1)*x=X;
// k!=(k-1)!*k=k