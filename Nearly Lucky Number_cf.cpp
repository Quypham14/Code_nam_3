#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    int check = 0;
    for (int i = 0; i < s.length(); i++)
        if ((s[i] == '7') || (s[i] == '4'))
            check++;
    if ((check == 4) || (check == 7))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}