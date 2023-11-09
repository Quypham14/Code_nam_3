#include<bits/stdc++.h>
using namespace std;
bool isPalidrome(string s)
{
    int left=0;
    int right=s.size()-1;
    while(left<right)
    {
        if(s[left]!=s[right])
            return false;
        left++;
        right--;
    }
    return true;
}
int t;
string a;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,a);
        if(isPalidrome(a))
            cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}
