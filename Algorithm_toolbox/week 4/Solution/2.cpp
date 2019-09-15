#include<iostream>
#include<algorithm>
using namespace std;
int majority(int a[],int n)
{
		sort(a,a+n);
		int i=0;
		int count=1;
		while(1)
		{
			while(i!=n&&a[i]==a[i+1])
			{
					count++;
					i++;
			}
			if(count>n/2)
			{
					return 1;
			}
			count=1;
			i++;
			if(i==n)
			{
					break;
			}
		}
		return 0;

}
int main()
{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		cout<<majority(a,n);
}
