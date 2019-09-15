#include<iostream>
typedef unsigned long long int ull;
using namespace std;
ull getfibo(ull n)
{
		ull prev=0;
		ull next=1;
		ull temp;
		if(n<=1)
				return n;
		for(int i=2;i<=n;i++)
		{
				temp=next;
				next+=prev;
				prev=temp;
		}
		return next;
}
int main()
{
		ull n;
		cin>>n;
		cout<<getfibo(n);
}
