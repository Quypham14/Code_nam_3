#include<bits/stdc++.h>
using namespace std;
int find_maximum_path(vector<vector<int>> &matrix, int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, 0));

    // Khởi tạo giá trị cho cột đầu tiên
    for (int i = 0; i < m; ++i)
    {
        dp[i][0] = matrix[i][0];
    }

    // Duyệt qua từng cột từ cột thứ 2 đến cột cuối cùng
    for (int j = 1; j < n; ++j)
    {
        for (int i = 0; i < m; ++i)
        {
            // Tính tổng lớn nhất từ các ô có thể đi tới (i, j)
            vector<int> possible_previous_rows = {i, i - 1, i + 1};
            int max_previous_sum = INT_MIN; // Khởi tạo max_previous_sum là giá trị âm vô cùng
            for (int prev_row : possible_previous_rows)
            {
                if (prev_row >= 0 && prev_row < m)
                {
                    max_previous_sum = max(max_previous_sum, dp[prev_row][j - 1]);
                }
            }
            dp[i][j] = max_previous_sum + matrix[i][j];
        }
    }

    // Tìm giá trị lớn nhất ở cột cuối cùng
    int max_sum = INT_MIN; // Khởi tạo max_sum là giá trị âm vô cùng
    for (int i = 0; i < m; ++i)
    {
        max_sum = max(max_sum, dp[i][n - 1]);
    }

    return max_sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0; i < t; ++i)
    {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> matrix(m, vector<int>(n));

        for (int j = 0; j < m; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                cin >> matrix[j][k];
            }
        }

        int result = find_maximum_path(matrix, m, n);
        results.push_back(result);
    }
    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}
