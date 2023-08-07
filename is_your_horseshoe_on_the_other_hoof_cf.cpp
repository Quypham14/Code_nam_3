#include <bits/stdc++.h>
using namespace std;
int d = 0;
int main()
{
    int a[5];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
        if (a[i] == a[i + 1])
            d++;
    cout << d;
    return 0;
}