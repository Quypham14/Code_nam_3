#include <bits/stdc++.h>
using namespace std;
int m = 0;
int a[101];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i <= s.size(); ++i)
        if (s[i] != '+')
            a[m++] = (int)s[i] - '0';
    sort(a, a + m );
    for (int i = 1; i <= m - 2; i++)
        cout << a[i] << '+';
    cout << a[m - 1];
    return 0;
}