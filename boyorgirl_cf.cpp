#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string q = "";

    cin >> s;
    int a[10001];
    for (int i = 0; i < 10001; i++)
        a[i] = 1;
    for (int i = 0; i < s.size(); i++)
        if (a[s[i]] == 1)
        {
            q = q + s[i];
            a[s[i]] = 0;
        }
    if (q.size() % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}