#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        float ans = 0;
        float n;
        float x;
        cin >> n >> x;
        for (float k = 1; k <= n; k++)
        {
            ans += pow(x, k) / ((k * (k + 1)) / 2);
        }
        printf("%0.3f\n", ans);
    }
    return 0;
}