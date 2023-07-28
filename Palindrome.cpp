#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
vector<string> findPalindrome(string s)
{
    vector<string> palinds;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            string sub = s.substr(i, j - i);
            if (isPalindrome(sub))
                palinds.push_back(sub);
        }
    }
    return palinds;
}
int n;
string s;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> s;
        string x = "";
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= '0') && (s[i] <= '9'))
                x = x + s[i];
        }
        if (x.size() == 0)
        {
            cout << -1;
        }
        else
        {
            vector<string> result = findPalindrome(x);
            sort(result.begin(), result.end(), [](const string &a, const string &b)
                 { return a.size() < b.size(); });
            for (const string &i : result)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}