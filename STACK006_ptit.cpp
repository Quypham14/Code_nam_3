#include <iostream>
#include <stack>
#include <string>

using namespace std;

string removeStars(const string &s)
{
    stack<char> charStack;
    for (char ch : s)
    {
        if (ch == '*')
        {
            if (!charStack.empty())
            {
                charStack.pop();
            }
        }
        else
        {
            charStack.push(ch);
        }
    }

    string result;
    while (!charStack.empty())
    {
        result = charStack.top() + result;
        charStack.pop();
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    cin.ignore(); // Đọc và bỏ qua ký tự xuống dòng sau khi đọc số lượng test cases

    while (t--)
    {
        string s;
        getline(cin, s);
        string result = removeStars(s);
        cout << result << endl;
    }

    return 0;
}
