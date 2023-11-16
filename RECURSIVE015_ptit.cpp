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
        int x;
        char c;
        vector<int> v;
        long long tich = 1;
        while (scanf("%d%c", &x, &c) != EOF)
        {
            v.push_back(x);
            tich *= x;
            if (c == '\n')
            {
                break;
            }
        }
        int l = v.size();
        for (int i = 0; i < l - 1; i++)
        {
            cout << tich / v[i] << ",";
        }
        cout << tich / v[l - 1] << "\n";
    }
    return 0;
}