#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 15;
const int MAX_S = 1000;

vector<int> isPrime(MAX_S + 1, 1);

void sieve()
{
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= MAX_S; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * 2; j <= MAX_S; j += i)
                isPrime[j] = 0;
        }
    }
}

void find_Prime_combinations(int n, int p, int s, vector<vector<int>> &result, vector<int> &current)
{
    if (n == 0)
    {
        if (s == 0)
            result.push_back(current);
        return;
    }
    for (int i = p + 1; i <= s; ++i)
    {
        if (isPrime[i])
        {
            current.push_back(i);
            find_Prime_combinations(n - 1, i, s - i, result, current);
            current.pop_back();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    int n, p, s;
    cin >> p >> n >> s;
    vector<int> current;
    vector<vector<int>> result;
    find_Prime_combinations(n, p, s, result, current);
    if (result.empty())
        cout << -1 << "\n";
    else
    {
        for (const vector<int> &prime : result)
        {
            for (int i = 0; i < n; ++i)
                cout << prime[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}