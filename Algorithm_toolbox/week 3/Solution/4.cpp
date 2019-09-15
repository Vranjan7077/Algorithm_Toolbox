#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int a[n],r[n];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
				cin>>r[i];
		}
		sort(a,a+n);
		sort(r,r+n);
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
				sum+=a[i]*r[i];
		}
		cout<<sum;
}
