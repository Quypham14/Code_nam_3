#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int t;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fibonacci(n)<<"\n";
    }
    return 0;
}
