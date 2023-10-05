#include <bits/stdc++.h>
using namespace std;
bool kiem_tra_dung_dau_ngoac(string s)
{
    stack<char> ngan_xep; // Sử dụng stack để theo dõi các dấu ngoặc mở đã gặp

    // Duyệt qua từng ký tự trong chuỗi đầu vào
    for (char ch : s)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        { // Nếu là dấu ngoặc mở, thêm vào stack
            ngan_xep.push(ch);
        }
        else
        {
            if (ngan_xep.empty())
            { // Nếu stack rỗng, không có dấu ngoặc mở tương ứng
                return false;
            }
            // Kiểm tra xem dấu ngoặc đóng có tương ứng với dấu ngoặc mở trên đỉnh stack không
            char top = ngan_xep.top();
            ngan_xep.pop();
            if ((ch == ')' && top != '(') || (ch == ']' && top != '[') || (ch == '}' && top != '{'))
            {
                return false;
            }
        }
    }

    // Kiểm tra xem sau khi duyệt hết chuỗi, stack còn phần tử không
    return ngan_xep.empty(); // Nếu stack rỗng, có nghĩa chuỗi đúng, ngược lại sai
}
int t;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        if (kiem_tra_dung_dau_ngoac(s))
            cout << "YES"
                 << "\n";
        else
            cout << "NO\n";
    }
    return 0;
}