#include<iostream>
using namespace std;
int binary_search(int a[],int low,int high,int x)
{
		if(low<=high)
		{
				int mid=(low+high)/2;
				if(a[mid]==x)
						return mid;
				else
						if(a[mid]>x)
								return binary_search(a,low,mid-1,x);
				else
						return binary_search(a,mid+1,high,x);
		}
		else
				return -1;
}
int main()
{
		int n;
		cin>>n;
		int m;
		int a[n];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		cin>>m;
		int x;
		for(int i=0;i<m;i++)
		{
				cin>>x;
				cout<<binary_search(a,0,n,x)<<" ";
		}
}
