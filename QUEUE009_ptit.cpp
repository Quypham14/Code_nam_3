#include<bits/stdc++.h>
using namespace std;
void reverse(queue<string> & myqueue, int k)
{
	deque<string> mydeque;
	for(int i=0;i<k;++i)
	{
		mydeque.push_front(myqueue.front());
		myqueue.pop();
	}
	while(!mydeque.empty())
	{
		myqueue.push(mydeque.front());
		mydeque.pop_front();
	}
	for(int i=0; i<myqueue.size()-k;++i)
	{
		myqueue.push(myqueue.front());
		myqueue.pop();
	}
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		queue<string> q;
		int k;
		cin>>s>>k;
		string tmp="";
		for(char c:s)
		{
			if(c==',')
			{
				q.push(tmp);
				tmp="";
			}
			else
			{
				tmp+=c;
			}
		}
		q.push(tmp);
		reverse(q,k);
		while(q.size()>1)
		{
			cout<<q.front()<<",";
			q.pop();
		}
		cout<<q.front()<<"\n";
	}
	return 0;
}
	
