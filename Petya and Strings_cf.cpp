#include <bits/stdc++.h>
using namespace std;
string a;
string b;
string chuyen_doi(string &str)
{
    string result = str;
    for (char &c : result)
    {
        c = tolower(c);
    }
    return result;
}
int main()
{
    cin >> a >> b;
    a = chuyen_doi(a);
    b = chuyen_doi(b);
    int i = 0;
    if(a==b)
    cout<<0;
    while (i <= a.size() - 1)
    {
        if (a[i] > b[i])
        {
            cout << 1;
            break;
        }
        else if (a[i] < b[i])
        {
            cout << -1;
            break;
        }
        i++;
    }
    
    return 0;
}