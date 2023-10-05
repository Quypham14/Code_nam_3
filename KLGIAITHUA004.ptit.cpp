// #include <bits/stdc++.h>
// #define ull unsigned long long
// using namespace std;
// ull to_hop_chap(int n, int k, int m)
// {
//     if (k == 0 || k == n)
//         return 1;
//     return (to_hop_chap(n - 1, k - 1, m) + to_hop_chap(n - 1, k, m)) % m;
// }
// int t;
// int n, k, m;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> k >> m;
//         cout << to_hop_chap(n, k, m) << "\n";
//     }
//     return 0;
// }
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
#include <bits/stdc++.h>
using namespace std;

// Tra ve gia tri cua nCk % p
int nCrModp(int n, int k, int m)
{
    // Doi voi cac truong hop r lon
    if (k > n - k)
        k = n - k;

    // Mang luu tru hang cuoi cung cua tam giac Pascal
    // muc cuoi cung cua hang cuoi cung la nCk
    int C[k + 1];
    memset(C, 0, sizeof(C));

    C[0] = 1; // Ham tren cung cua tam giac Pascal

    // Tu tren xuong
    for (int i = 1; i <= n; i++)
    {
        // dien vao muc tiep theo bang gia tri hang truoc do
        for (int j = min(i, k); j > 0; j--)
            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j - 1]) % m;
    }
    return C[k];
}

// Driver program
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        cout << nCrModp(n, k, m) << endl;
    }
    return 0;
}