#include <bits/stdc++.h>
using namespace std;
int check(string s)
{
    int maxi = -1;
    for (int i = 0; i < s.size(); ++i)
    {
        int num_one = 0;
        int num_zero = 0;
        for (int j = i; j < s.size(); ++j)
        {
            if (s[j] == '0')
                num_zero++;
            else
                num_one++;
            int different = num_zero - num_one;
            maxi = max(maxi, different);
        }
    }
    return maxi;
}
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
        cout << check(s) << "\n";
    }
    return 0;
}