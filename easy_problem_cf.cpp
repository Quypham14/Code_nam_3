#include <bits/stdc++.h>
using namespace std;
int n;
int q;
bool check = true;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> q;
        if (q == 1)
            check = false;
    }
    if (check)
        cout << "EASY";
    else
        cout << "HARD";
    return 0;
}
