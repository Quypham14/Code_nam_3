#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
// Hàm nhân hai ma trận A và B
vector<vector<ll>> matrix_multiply(vector<vector<ll>> A, vector<vector<ll>> B, int N)
{
    vector<vector<ll>> result(N, vector<ll>(N, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                result[i][j] += (A[i][k] * B[k][j]) % MOD;
                result[i][j] %= MOD;
            }
        }
    }
    return result;
}
// Hàm tính ma trận A^k
vector<vector<ll>> matrix_power(const vector<vector<ll>> &A, ll k, int N)
{
    if (k == 1)
    {
        return A;
    }
    else if (k % 2 == 0)
    {
        vector<vector<ll>> half_power = matrix_power(A, k / 2, N);
        return matrix_multiply(half_power, half_power, N);
    }
    else
    {
        return matrix_multiply(A, matrix_power(A, k - 1, N), N);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        ll K;
        cin >> N >> K;

        vector<vector<ll>> A(N, vector<ll>(N, 0));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> A[i][j];
            }
        }

        vector<vector<ll>> result = matrix_power(A, K, N);

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
