#include <bits/stdc++.h>
using namespace std;
int t;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[100005];
        int dem = 0;
        map<int, int> mymap;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            mymap[a[i]]++;
        }
        for (int i = 1; i <= n; ++i)
            if (mymap[a[i]] == 1)
                dem++;
        cout << dem << "\n";
    }
    return 0;
}