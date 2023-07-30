#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    while ((s[0] != 'h') && (s.length() >= 5))
    {
        s.erase(0, 1);
    }
    if ((s.length() < 5) || (s[0] != 'h'))
        cout << "NO";
    else
    {
        while ((s[1] != 'e') && (s.length() >= 5))
        {
            s.erase(1, 1);
        }
        if ((s.length() < 5) || (s[1] != 'e'))
            cout << "NO";
        else
        {
            while ((s[2] != 'l') && (s.length() >= 5))
            {
                s.erase(2, 1);
            }
            if ((s.length() < 5) || (s[2] != 'l'))
                cout << "NO";
            else
            {
                while ((s[3] != 'l') && (s.length() >= 5))
                {
                    s.erase(3, 1);
                }
                if ((s.length() < 5) || (s[3] != 'l'))
                    cout << "NO";
                else
                {
                    while ((s[4] != 'o') && (s.length() >= 5))
                        s.erase(4, 1);
                    if ((s[4] == 'o'))
                        cout << "YES";
                    else
                        cout << "NO";
                }
            }
        }
    }
    return 0;
}