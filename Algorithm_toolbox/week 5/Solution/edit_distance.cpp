#include<iostream>
using namespace std;
int min(int a,int b,int c)
{
		return min(a,min(b,c));
}
int edit(string s1,string s2)
{
		int m[s1.length()+1][s2.length()+1];
		for(int i=0;i<=s1.length();i++)
		{
				m[i][0]=i;
		}
		for(int i=0;i<=s2.length();i++)
		{
				m[0][i]=i;
		}
		for(int i=1;i<=s1.length();i++)
		{
				for(int j=1;j<=s2.length();j++)
				{
						if(s1[i-1]==s2[j-1])
						{
								m[i][j]=m[i-1][j-1];
						}
						else
						{
								m[i][j]=min(m[i-1][j]+1,m[i][j-1]+1,m[i-1][j-1]+1);
						}
				}
		}
		
		return m[s1.length()][s2.length()];
}
int main()
{
		string s1,s2;
		cin>>s1>>s2;
		cout<<edit(s1,s2);
}
