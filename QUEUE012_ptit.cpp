#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> v;
        vector<int> v1;
        string tmp1 = "", tmp2 = "";
        for (char c : s1)
        {
            if (c == ',')
            {
                int value = stoi(tmp1);
                if (count(v.begin(), v.end(), value) == 0)
                {
                    v.push_back(stoi(tmp1));
                }
                tmp1 = "";
            }
            else
            {
                tmp1 += c;
            }
        }
        if (count(v.begin(), v.end(), stoi(tmp1)) == 0)
            v.push_back(stoi(tmp1));
        for (char c1 : s2)
        {
            if (c1 == ',')
            {
                v1.push_back(stoi(tmp2));
                tmp2 = "";
            }
            else
            {
                tmp2 += c1;
            }
        }
        v1.push_back(stoi(tmp2));
        for (int x : v1)
        {
            if (count(v.begin(), v.end(), x) == 0)
            {
                v.push_back(x);
            }
        }
        int l = v.size();
        for (int i = 0; i < l - 1; i++)
        {
            cout << v[i] << ",";
        }
        cout << v[l - 1] << "\n";
    }
    return 0;
}