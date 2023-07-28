#include <bits/stdc++.h>
using namespace std;
int combination(long n, long k)
{
    // Xác định trường hợp đặc biệt
    if (k == 0 || k == n)
    {
        return 1;
    }
    else if (k > n)
    {
        return 0;
    }

    // Khởi tạo ma trận C với tất cả các giá trị ban đầu là 0
    long long C[n + 1][k + 1] = {0};

    // Tính toán giá trị của tổ hợp bằng cách sử dụng quy tắc tổ hợp
    for (long i = 0; i <= n; i++)
    {
        for (long j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }

    return C[n][k];
}
int main()
{
    int n;
    cin >> n;
    long a[100001];
    long long d = 0;
    long b[100001];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        b[a[i]]++;
    for (int i = 1; i <= n; i++)
    {
        
        if (b[a[i]] > 1)
        {
            d = d + combination( b[a[i]],2);
            b[a[i]] = 0;
        }
    }
    cout << d;
    return 0;
   
    
}