#include <bits/stdc++.h>
using namespace std;
void generateCombinations(vector<int> &current, vector<vector<int>> &result, int n, int k, int start)
{
    if (k == 0)
    {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n - k + 1; i++)
    {
        current.push_back(i);
        generateCombinations(current, result, n, k - 1, i + 1);
        current.pop_back();
    }
}
int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> current;
        vector<vector<int>> result;
        generateCombinations(current, result, n, k, 1);
        cout << result.size() << "\n";
        for (const vector<int> &combo : result)
        {
            cout << '[';
            for (int i = 0; i < k; i++)
            {
                cout << combo[i];
                if (i < k - 1)
                    cout << " ";
            }
            cout << ']' << "\n";
        }
        current.clear();
        result.clear();
    }
    return 0;
}