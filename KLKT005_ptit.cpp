#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int binary_search(vector<char> &s, char key)
{
    int left = 0;
    int right = s.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (s[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        vector<char> check;

        for (char &element : s)
        {
            element = tolower(element);
        }

        for (int i = 0; i < s.size(); ++i)
        {
            if (check.empty() || s[i] > check.back())
            {
                check.push_back(s[i]);
            }
            else
            {
                int pos = binary_search(check, s[i]);
                check[pos] = s[i];
            }
        }

        cout << check.size() << "\n";
    }

    return 0;
}
