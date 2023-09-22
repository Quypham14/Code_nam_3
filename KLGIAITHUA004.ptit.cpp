#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull to_hop_chap(int n, int k, int m)
{
    if (k == 0 || k == n)
        return 1;
    return (to_hop_chap(n - 1, k - 1, m) + to_hop_chap(n - 1, k, m)) % m;
}
int t;
int n, k, m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> m;
        cout << to_hop_chap(n, k, m) << "\n";
    }
    return 0;
}
// #include <iostream>
// #include <string>

// using namespace std;

// string chuyenCoSo(long long n, int b) {
//     if (n == 0) {
//         return "0";
//     }

//     string result = "";
//     while (n > 0) {
//         int digit = n % b;
//         if (digit < 10) {
//             result = char('0' + digit) + result;
//         } else {
//             result = char('A' + digit - 10) + result;
//         }
//         n /= b;
//     }

//     return result;
// }

// int main() {
//     long long n;
//     int b;

//     cout << "Nhap so tu nhien n: ";
//     cin >> n;
//     cout << "Nhap he co so b (1 < b <= 16): ";
//     cin >> b;

//     if (1 < b && b <= 16) {
//         string result = chuyenCoSo(n, b);
//         cout << n << " o he co so 10 chuyen sang he co so " << b << " la: " << result << endl;
//     } else {
//         cout << "He co so khong hop le." << endl;
//     }

//     return 0;
// }
