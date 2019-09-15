#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int a[n];
		queue<int> q;
		pair<int,int> p[n];
		int x,y;
		for(int i=0;i<n;i++)
		{
				cin>>x>>y;
				p[i].first=x;
				p[i].second=y;
		}
		sort(p,p+n);
		int f,s;
		f=p[0].first;
		s=p[0].second;
		for(int i=0;i<n;i++)
		{
				if(s>p[i].first)
				{
						if(s>p[i].second)
						{
								s=p[i].second;
						}
						if(f<p[i].first)
						{
								f=p[i].first;
						}
						if(i==n-1)
						{
								q.push(s);
						}
				}
				else
				{
						q.push(s);
						f=p[i].first;
						s=p[i].second;
				}
		}
		cout<<q.size()<<endl;
		while(!q.empty())
		{
				cout<<q.front()<<" ";
				q.pop();
		}
}
