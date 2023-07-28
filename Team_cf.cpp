#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a, b, c;
    int k = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        int d = 0;
        if (a == 1)
            d++;
        if (b == 1)
            d++;
        if (c == 1)
            d++;
        if (d >= 2)
            k++;
    }
    cout << k;
    return 0;
}