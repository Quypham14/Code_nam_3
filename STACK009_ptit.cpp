#include <iostream>
#include <stack>
#include <string>

using namespace std;

string decodeString(const string &s)
{
    stack<int> countStack;
    stack<string> stringStack;
    string currentString;
    int count = 0;

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            count = count * 10 + (ch - '0');
        }
        else if (ch == '[')
        {
            countStack.push(count);
            stringStack.push(currentString);
            count = 0;
            currentString.clear();
        }
        else if (ch == ']')
        {
            int repeatTimes = countStack.top();
            countStack.pop();
            string temp = currentString;
            for (int i = 1; i < repeatTimes; ++i)
            {
                currentString += temp;
            }
            currentString = stringStack.top() + currentString;
            stringStack.pop();
        }
        else
        {
            currentString += ch;
        }
    }

    return currentString;
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
        string result = decodeString(s);
        cout << result << endl;
    }

    return 0;
}
