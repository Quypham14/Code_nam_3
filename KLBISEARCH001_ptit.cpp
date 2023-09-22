#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    unordered_map<int, int> first_occurrence;
    vector<string> result;

    for (int i = 0; i < n; ++i)
    {
        if (first_occurrence.find(a[i]) == first_occurrence.end())
        {
            first_occurrence[a[i]] = i + 1;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        if (first_occurrence.find(b[i]) != first_occurrence.end())
        {
            result.push_back(to_string(first_occurrence[b[i]]));
        }
        else
        {
            result.push_back("0");
        }
    }

    cout << result[0];
    for (int i = 1; i < m; ++i)
    {
        cout << " " << result[i];
    }
    cout << endl;

    return 0;
}
