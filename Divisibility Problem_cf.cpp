#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long a, b;
    cin >> n;
    while (n--)
    {

        cin >> a >> b;
        long key = 0;
        long remain;
        if (a > b)
        {
            remain = a % b;
            if (remain != 0)
            {
                key = b - remain;
            }
        }
        else
        {
            key = b - a;
        }
        cout << key << "\n";
    }
    return 0;
}