#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int minTimeToConnect(int a, vector<long long> lengths)
{
    long long time = 0;

    while (lengths.size() > 1)
    {

        sort(lengths.begin(), lengths.end());
        long long shortest_1 = lengths[0];
        long long shortest_2 = lengths[1];

        time += (shortest_1 + shortest_2) % mod;
        lengths.erase(lengths.begin(), lengths.begin() + 2);
        lengths.push_back(shortest_1 + shortest_2);
    }

    return time % mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        int a;
        cin >> a;
        vector<long long> lengths(a);
        for (int i = 0; i < a; ++i)
        {
            cin >> lengths[i];
        }
        if (a == 1)
        {
            cout << lengths[0] % mod << "\n";
            break;
        }
        else
        {
            long long result = minTimeToConnect(a, lengths);
            cout << result << "\n";
        }
    }

    return 0;
}