#include <iostream>
using namespace std;
// Hàm đếm số lượng số 1 từ 0 đến n
int countDigitOne(int n)
{
    int ones = 0;

    // Mỗi vòng lặp xử lý một vị trí của số
    for (long long m = 1; m <= n; m *= 10)
    {
        // Số lượng nhóm chữ số 1 tại vị trí m
        int groupCount = (n / m + 8) / 10;

        // Số lượng chữ số 1 tại vị trí m
        int positionCount = (n / m % 10 == 1) ? n % m + 1 : 0;

        // Cộng dồn vào tổng số lượng chữ số 1
        ones += groupCount * m + positionCount;
    }

    return ones;
}

int main()
{
    int t; // Số lượng test case
    cin >> t;

    while (t--)
    {
        int n; // Giá trị của n
        cin >> n;

        // Gọi hàm đếm số lượng số 1 và in kết quả
        cout << countDigitOne(n) << "\n";
    }

    return 0;
}
