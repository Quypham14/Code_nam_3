#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        int found;
        string child = "";
        string parent = "";
        for (int i = 0; i < s.length(); i++)
            if (s[i] == ',')
                found = i;
        for (int i = 0; i < found; ++i)
            child += s[i];
        for (int i = found + 2; i < s.length(); i++)
            parent += s[i];
        if (child.length() <= 14 || parent.length() <= 15)
            cout << 0 << "\n";
        else
        {
            string child_last = "";
            for (int i = 11; i < child.length() - 3; i++)
                child_last += child[i];
            string parent_last = "";
            for (int j = 12; j < parent.length() - 3; j++)
                parent_last += parent[j];
            size_t token = parent_last.find(child_last);
            if (token != string::npos)
                cout << token << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}