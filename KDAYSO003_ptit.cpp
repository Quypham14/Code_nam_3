#include <bits/stdc++.h>
using namespace std;

int dem = 0;
vector<int> arr;

void findSubset(int tong, int K, int S, int chiso)
{
    if (tong == S && K == 0)
    {
        dem++;
        return;
    }
    if (chiso == arr.size() || K == 0)
    {
        return;
    }
    int remaining_elements = arr.size() - chiso;
    if (tong + arr[chiso] <= S && remaining_elements >= K)
    {
        findSubset(tong + arr[chiso], K - 1, S, chiso + 1);
    }
    findSubset(tong, K, S, chiso + 1);
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
        int N, K, S;
        cin >> N >> K;
        S = 0;
        for (int i = 0; i < N; ++i)
        {
            int b;
            cin >> b;
            arr.push_back(b);
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < K; ++i)
            S += arr[i];
        // cout << S << "\n";
        findSubset(0, K, S, 0);
        cout << dem << "\n";
        dem = 0;
        arr.clear();
    }
    return 0;
}