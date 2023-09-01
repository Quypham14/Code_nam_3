#include <bits/stdc++.h>
using namespace std;

// Hàm kiểm tra xem có thể đặt quân hậu tại ô (row, col) không
bool is_safe(vector<vector<int>> &board, int row, int col, int n)
{
    // Kiểm tra cột
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }

    // Kiểm tra đường chéo trái trên
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    // Kiểm tra đường chéo phải trên
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}
int place_queens(vector<vector<int>> &board, int row, int n)
{
    if (row == n)
    {
        return 1;
    }

    int count = 0;

    for (int col = 0; col < n; col++)
    {
        if (is_safe(board, row, col, n))
        {
            board[row][col] = 1;
            count += place_queens(board, row + 1, n);

            board[row][col] = 0;
        }
    }

    return count;
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
        int n;
        cin >> n;

        vector<vector<int>> board(n, vector<int>(n, 0));

        int total_solutions = place_queens(board, 0, n);
        cout << total_solutions << endl;
    }

    return 0;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// bool is_safe(vector<vector<int>>& board, int row, int col, int n) {
//     // Kiểm tra xem có quân hậu nào kiểm soát ô (row, col) không
//     // Kiểm tra cột hiện tại
//     for (int i = 0; i < row; i++) {
//         if (board[i][col] == 1) {
//             return false;
//         }
//     }

//     // Kiểm tra đường chéo trái trên
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
//         if (board[i][j] == 1) {
//             return false;
//         }
//     }

//     // Kiểm tra đường chéo phải trên
//     for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
//         if (board[i][j] == 1) {
//             return false;
//         }
//     }

//     return true;
// }

// void solve_n_queens(int n) {
//     vector<vector<int>> board(n, vector<int>(n, 0));
//     int count = 0;

//     // Hàm đệ quy để thử tất cả các cách đặt quân hậu
//     function<void(int)> backtrack = [&](int row) {
//         if (row == n) {
//             // Tìm thấy một giải pháp
//             count++;
//             return;
//         }
//         for (int col = 0; col < n; col++) {
//             if (is_safe(board, row, col, n)) {
//                 board[row][col] = 1;
//                 backtrack(row + 1);
//                 board[row][col] = 0;  // Quay lui
//             }
//         }
//     };

//     backtrack(0);
//     cout << count << endl;
// }

// int main() {
//     int T;
//     cin >> T;  // Số lượng test case
//     for (int i = 0; i < T; i++) {
//         int n;
//         cin >> n;  // Kích thước bàn cờ
//         solve_n_queens(n);
//     }
//     return 0;
// }