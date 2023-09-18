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

        long long sum = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            sum = (sum << 2) | (s[i] - '0');
        }
        cout << sum << "\n";
    }

    return 0;
}
