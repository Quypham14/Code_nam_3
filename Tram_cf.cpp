#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int sumx = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        sumx = sumx - a + b;
        sum = max(sum, sumx);
    }
    cout << sum;
    return 0;
}