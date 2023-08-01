#include <bits/stdc++.h>
using namespace std;
int n;
int p, q;
int d = 0;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if (q - p >= 2)
            d++;
    }
    cout << d;
    return 0;
}