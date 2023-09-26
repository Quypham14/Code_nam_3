#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll is_prime(ll n)
{
    ll largest_number = -1;
    while (n % 2 == 0)
    {
        largest_number = 2;
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            largest_number = i;
            n /= i;
        }
    }
    if (n > 1)
        largest_number = n;
    return largest_number;
}
int t;
ll n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<is_prime(n)<<"\n";
    }
    return 0;
}