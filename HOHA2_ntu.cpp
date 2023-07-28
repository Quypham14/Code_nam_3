#include <bits/stdc++.h>
using namespace std;
long long sum = 0;
int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            cout<<sum<<"\n";
            if (i != n / i && i != sqrt(n))
                sum += n / i;
                cout<<sum<<" ";
        }
    }

    if (sum / 2 == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}