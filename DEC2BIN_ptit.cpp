#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
void binary_number(ll a)
{
    string binary = "";
    while (a >= 1)
    {
        int r = a % 2;
        a /= 2;
        binary = to_string(r) + binary;
    }
    cout << binary << "\n";
}
ll a;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a;
        binary_number(a);
    }
    return 0;
}