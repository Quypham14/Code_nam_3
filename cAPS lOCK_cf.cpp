#include <bits/stdc++.h>
using namespace std;
string s;
bool treatment(string a)
{
    bool chek = true;
    for (int i = 0; i < a.length(); i++)
        if (toupper(a[i]) != a[i])
            chek = false;
    if (chek)
        return true;
    return false;
}
int main()
{
    cin >> s;
    if (treatment(s))
    {
        for (char &i : s)
            i = tolower(i);
        cout << s;
    }
    else
    {
        int check = 1;
        for (int i = 1; i < s.size(); ++i)
        {
            char c;
            c = toupper(s[i]);
            if (c != s[i])
                check = 0;
        }

        if (check == 1)
        {
            if (check == 1)
            {
                for (char &i : s)
                    i = tolower(i);
                s[0] = toupper(s[0]);
                cout << s;
            }
        }
        else
            cout << s;
    }
    return 0;
}