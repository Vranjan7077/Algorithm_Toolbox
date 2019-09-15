#include<iostream>
typedef unsigned long long int ull;
using namespace std;
ull gcd(ull a,ull b)
{
		if(a%b==0)
				return b;
		else
				gcd(b,a%b);
}
int main()
{
		ull a,b;
		cin>>a>>b;
		if(a==0||b==0)
		{
				cout<<"0";
				return 0;
		}
		ull g=gcd(a,b);
		a/=g;
		cout<<a*b;
}
