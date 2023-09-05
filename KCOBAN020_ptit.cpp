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
        cin >> s;
        long long tich = 1;
        if (s[0] != '1')
        {
            tich *= int(s[0]) - 49;
            for (int i = 1; i < s.size(); ++i)
                tich *= 9;
        }
        else
        {
            for (int i = 1; i < s.size(); ++i)
                tich *= 9;
        }
        cout << tich << "\n";
    }
    return 0;
}