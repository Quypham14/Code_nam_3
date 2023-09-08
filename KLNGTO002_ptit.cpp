// #include <bits/stdc++.h>
// using namespace std;

// bool is_prime(long n)
// {
//     if (n < 2)
//         return false;
//     if (n == 2 || n == 3 || n == 5 || n == 7)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
//         return false;
//     for (long i = 11; i * i <= n; i += 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long l, r;
//         cin >> l >> r;
//         int count = 0;

//         for (long i = l; i <= r; ++i)
//         {
//             if (is_prime(i))
//             {
//                 ++count;
//             }
//         }

//         cout << count << "\n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int R) {
    vector<bool> isPrime(R + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= R; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= R; i += p) {
                isPrime[i] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= R; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        vector<int> primes = sieve(r);

        int count = 0;
        for (int prime : primes) {
            if (prime >= l && prime <= r) {
                ++count;
            }
        }

        cout << count << "\n";
    }

    return 0;
}

