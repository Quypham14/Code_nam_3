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
        int dem = 0;
        for (int i = 0; i < s.size(); ++i)
            if (isdigit(s[i]))
                dem++;
        cout << dem << "\n";
    }
    return 0;
}