#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int dem = 1;
    int s;
    cin >> n;
    int q = n - 1;
    cin >> s;
    int check = s;
    while (q--)
    {
        cin >> s;
        if (s != check)
        {
            dem++;
            check = s;
        }
    }
    cout << dem;
    return 0;
}