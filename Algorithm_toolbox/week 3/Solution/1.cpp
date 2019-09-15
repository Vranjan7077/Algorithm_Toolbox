#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int p;
		int count=0;
		while(n!=0)
		{
				if(n>=10)
				{
						p=n/10;
						count+=p;
						n-=p*10;
				}
				if(n>=5)
				{
						p=n/5;
						count+=p;
						n-=p*5;
				}
				if(n>=1)
				{
						count+=n;
						break;
				}
		}
		cout<<count;
}
