#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    int n;
    cin >> n;
    cin >> s;
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == s[i + 1])
            dem++;
    cout << dem;
    return 0;
}