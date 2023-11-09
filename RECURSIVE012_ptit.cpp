#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int left, int right)
{
    if(left>=right)
        return true;
    if(s[left]!=s[right])
        return false;
    return isPalindrome(s, left+1,right-1);
}
int t;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        if(isPalindrome(s,0,s.size()-1))
            cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}
