#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        string tmp = "";
        for (char c : s)
        {
            if (!tmp.empty() && (abs(c - tmp.back()) == 32))
                tmp.pop_back();
            else
                tmp.push_back(c);
        }

        cout << tmp;
        cout << "\n";
    }

    return 0;
}