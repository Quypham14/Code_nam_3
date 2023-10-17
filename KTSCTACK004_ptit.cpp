#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

string infixToPostfix(const string &infix)
{
    stack<char> operatorStack;
    string postfix = "";

    for (char c : infix)
    {
        if (isalnum(c))
        {
            postfix += c;
        }
        else if (c == '(')
        {
            operatorStack.push(c);
        }
        else if (c == ')')
        {
            while (!operatorStack.empty() && operatorStack.top() != '(')
            {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.pop(); // Remove the '('
        }
        else if (isOperator(c))
        {
            while (!operatorStack.empty() && operatorStack.top() != '(' &&
                   precedence(operatorStack.top()) >= precedence(c))
            {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty())
    {
        postfix += operatorStack.top();
        operatorStack.pop();
    }

    return postfix;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    for (int i = 0; i < n; i++)
    {
        string infixExpression;
        getline(cin, infixExpression);
        string postfixExpression = infixToPostfix(infixExpression);
        cout << postfixExpression << endl;
    }

    return 0;
}