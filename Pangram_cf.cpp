#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int sum = 0;
    int a[500];
    for (char &i : s)
        i = tolower(i);
    for (int i = 0; i <= 500; i++)
        a[i] = 1;
    for (int i = 0; i < s.size(); i++)
        if (a[int(s[i])] == 1)
        {
            a[int(s[i])] = 0;
            sum++;
        }
    if (sum != 26)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}