#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> find_prime(long long n)
{
    long long prime = 0;
    long long largest_exponment = 0;
    map<long long, long long> mymap;
    long long i = 2;
    while (i * i <= n)
    {
        while (n % i == 0)
        {
            mymap[i]++;
            n /= i;
        }
        i++;
    }
    if (n > 1)
        mymap[n]++;
    for (const auto &q : mymap)
    {
        if (q.second > largest_exponment)
        {
            prime = q.first;
            largest_exponment = q.second;
        }
    }
    return make_pair(prime, largest_exponment);
}
int t;
long long n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        pair<long long, long long> result = find_prime(n);
        cout << result.first << " " << result.second << "\n";
    }
    return 0;
}