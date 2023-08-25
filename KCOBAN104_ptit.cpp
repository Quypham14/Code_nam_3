#include <bits/stdc++.h>
using namespace std;
int t;
string a;
string b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> a;
        cin >> b;
        int a_int;
        int b_int;
        string c;
        string d;
        c = a;
        d = b;
        for (int i = 0; i < a.size(); i++)
            if (a[i] == '5')
                a[i] = '3';
        stringstream(a) >> a_int;
        for (int i = 0; i < b.size(); i++)
            if (b[i] == '5')
                b[i] = '3';
        stringstream(b) >> b_int;
        cout << a_int + b_int << " ";
        for (int i = 0; i < c.size(); i++)
            if (c[i] == '3')
                c[i] = '5';
        stringstream(c) >> a_int;
        for (int i = 0; i < d.size(); i++)
            if (d[i] == '3')
                d[i] = '5';
        stringstream(d) >> b_int;
        cout << a_int + b_int << "\n";
    }
    return 0;
}