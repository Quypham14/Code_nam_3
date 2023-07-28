#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;
int main()
{

    cin >> n >> k;
    cin >> s;
    while (k--)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] == 'B') && (s[i + 1] == 'G'))
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}