#include <bits/stdc++.h>
using namespace std;
void max_arr(vector<long> &a)
{
    long max_now = a[0];
    long max_future = a[0];
    for (long i = 1; i < a.size(); ++i)
    {
        max_now = max(a[i], max_now + a[i]);
        max_future = max(max_now, max_future);
    }
    cout << max_future << "\n";
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
        long n;
        cin >> n;
        vector<long> a(n);
        for (long i = 0; i < n; ++i)
            cin >> a[i];
        max_arr(a);
        a.clear();
    }
    return 0;
}