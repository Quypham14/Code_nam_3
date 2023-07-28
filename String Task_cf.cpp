#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (char &c : s)
        c = tolower(c);
    for (int i = 0; i < s.size(); i++)
    {

        if ((s[i] != 'a') && (s[i] != 'o') && (s[i] != 'y') && (s[i] != 'e') && (s[i] != 'u') && (s[i] != 'i'))
            cout << "." << s[i];
    }
    return 0;
}