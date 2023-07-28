#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        cin>>a;
        int q = a.size();
        int z = q - 2;
        if (q <= 10)
            cout << a;
        else
        {
            cout << a[0];
            cout << z;
            cout << a[q - 1];
        }
        cout<<"\n";
    }
    return 0;
}