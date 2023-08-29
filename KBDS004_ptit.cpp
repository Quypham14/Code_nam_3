#include <bits/stdc++.h>
using namespace std;
int t;
long n;
int k;
int count_fibo(int n, int k, int first, vector<long long> &fibo)
{
    if (k == 0)
    {
        if (n == 0)
            return 1;
        return 0;
    }
    int way = 0;
    for (int i = first; i < fibo.size(); ++i)
        if (fibo[i] <= n)
        {
            way += count_fibo(n - fibo[i], k - 1, i, fibo);
        }
    return way;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        vector<long long> fibo;
        cin >> n >> k;
        long f[45];
        f[0] = 0;
        f[1] = 1;
        fibo.push_back(f[0]);
        fibo.push_back(f[1]);
        for (long i = 2; i <= 45; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
            fibo.push_back(f[i]);
        }
        // for (int i = 0; i < fibo.size(); ++i)
        //     cout << fibo[i] << " ";
        cout << count_fibo(n, k, 1, fibo) << "\n";
    }
    return 0;
}