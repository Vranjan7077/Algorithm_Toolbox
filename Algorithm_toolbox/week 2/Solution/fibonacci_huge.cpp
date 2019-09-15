#include<iostream>
using namespace std;
typedef unsigned long long int ull;
ull getfibo(ull n,ull mod)
{
		if(n<=1)
				return n;
		if(n==2)
				return 1;
		ull prev=1;
		ull next=1;
		ull temp;
		for(ull i=3;i<=n;i++)
		{
				temp=next%mod;
				next+=prev%mod;
				prev=temp%mod;
		}
		return next%mod;
}
ull getp(ull mod)
{
		ull prev=1;
		ull next=1;
		bool one=0,two=0;
		int temp;
		int index=0;
		while(1)
		{
				temp=next;
				next+=prev;
				prev=temp;
				index++;
				prev%=mod;
				next%=mod;
				if(!one)
				{
					if(next==0)
					{
							one=1;
					}
				}
				else
				{
						if(next==1)
						{
								two=1;
								break;
						}
						else
						{
								one=0;
						}
				}
		}
		return index+1;
}
int main()
{
		ull n,mod;
		cin>>n>>mod;
		ull p=getp(mod);
		n%=p;
		cout<<getfibo(n,mod);
}
