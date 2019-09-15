#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
		double w;
		int n;
		cin>>n;
		cin>>w;
		pair<double,pair<double,double> >p[n];
		double v[n],q[n];
		for(int i=0;i<n;i++)
		{
				cin>>v[i];
				cin>>q[i];
		}
		for(int i=0;i<n;i++)
		{
				p[i].first=v[i]/q[i];
				p[i].second.first=v[i];
				p[i].second.second=q[i];
		}
		sort(p,p+n,greater<>());
		double value=0;
		for(int i=0;i<n;i++)
		{
				if(p[i].second.second<=w)
				{
						w-=p[i].second.second;
						value+=p[i].second.first;
				}
				else
				{
						value+=w*p[i].first;
						break;
				}
				if(w==0)
						break;
		}
		cout<<fixed<<setprecision(4)<<value;
}
