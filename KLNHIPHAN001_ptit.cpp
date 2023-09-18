// #include <bits/stdc++.h>
// using namespace std;
// void create_binary(vector<string> &binary, int n, string prefix)
// {
//     if (n == 0)
//         binary.push_back(prefix);
//     else
//     {
//         create_binary(binary, n - 1, prefix + '0');
//         create_binary(binary, n - 1, prefix + '1');
//     }
// }
// int t;
// int n;
// string a, b;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> a >> b;
//         vector<string> binary;
//         create_binary(binary, n, "");
//         long long first = 0;
//         long long last = 0;
//         for (long long i = 0; i < binary.size(); ++i)
//         {
//             if (binary[i] == a)
//                 first = i;
//             if (binary[i] == b)
//                 last = i;
//         }
//         if (first > last)
//         {
//             int tmp = first;
//             first = last;
//             last = tmp;
//         }
//         if (last == first)
//             cout << 0 << "\n";
//         else
//             cout << last - 1 - first << "\n";
//         binary.clear();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
ull change_binary_to_decimal(string s, int n)
{
    ull sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            sum |= 1 << (n - 1 - i);
    }
    return sum;
}
ull out(string a, string b, int n)
{
    ull aa = change_binary_to_decimal(a, n);
    ull bb = change_binary_to_decimal(b, n);
    if (aa == bb)
        return 0;
    if (aa > bb)
        return aa - bb - 1;
    return bb - aa - 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string x, y;
        cin >> n >> x >> y;
        cout << out(x, y, n) << "\n";
    }
    return 0;
}