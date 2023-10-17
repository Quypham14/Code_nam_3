#include <iostream>
#include <vector>
using namespace std;

string removeOuterParentheses(string s)
{
    vector<string> result;
    int count = 0;
    string current = "";

    for (char c : s)
    {
        if (c == '(')
        {
            if (count > 0)
            {
                current += c;
            }
            count++;
        }
        else if (c == ')')
        {
            count--;
            if (count > 0)
            {
                current += c;
            }
            else if (count == 0)
            {
                result.push_back(current);
                current = "";
            }
        }
    }

    string finalResult;
    for (string str : result)
    {
        finalResult += str;
    }

    return finalResult;
}

int main()
{
    int testCases;
    cin >> testCases;
    cin.ignore(); // Ignore the newline character

    while (testCases--)
    {
        string s;
        getline(cin, s);
        string result = removeOuterParentheses(s);
        cout << result << endl;
    }

    return 0;
}