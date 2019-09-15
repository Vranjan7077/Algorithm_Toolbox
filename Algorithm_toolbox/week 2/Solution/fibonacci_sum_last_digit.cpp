#include<iostream>
typedef unsigned long long int ull;
using namespace std;
ull getsum(ull n)
{
		if(n<=1)
				return n;
		ull prev=0;
		ull next=1;
		ull temp;
		ull sum=1;
		for(int i=2;i<=n;i++)
		{
				temp=next%10;
				next+=prev%10;
				prev=temp%10;
				sum+=next;
				sum%10;
		}
		return sum;
}
int main()
{
		ull n;
		cin>>n;
		n%=60;
		cout<<getsum(n)%10;
}
