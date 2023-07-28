#include <bits/stdc++.h>
using namespace std;
string n;
int main()
{
    cin >> n;
    int check = 1;
    int maxx = -1;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == n[i + 1])
        {
            check++;
            maxx = max(maxx, check);
        }
        else
        {
            check = 1;
            maxx = max(maxx, check);
        }
    }
    if (maxx < 7)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}