#include <bits/stdc++.h>
using namespace std;

long long nDigitPalindromes(int n)
{
    return (9 * pow(10, (n - 1) / 2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cout << nDigitPalindromes(n) << endl;
    }
    return 0;
}