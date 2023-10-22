#include <bits/stdc++.h>
using namespace std;
bool treatment(string a, string b)
{
    string a_clean = "";
    string b_clean = "";
    for (char c : a)
    {

        if (c == '#')
        {
            if (!a_clean.empty())
            {

                a_clean.pop_back();
            }
        }
        else
        {
            a_clean.push_back(c);
        }
    }
    for (char c : b)
    {

        if (c == '#')
        {
            if (!b_clean.empty())
            {

                b_clean.pop_back();
            }
        }
        else
        {
            b_clean.push_back(c);
        }
    }
    return a_clean == b_clean;
}
int t;
string a, b;
int main()
{
    cin >> t;
    cin.ignore();
    while (t--)
    {

        cin >> a >> b;
        bool result = treatment(a, b);
        cout << result << "\n";
    }

    return 0;
}
