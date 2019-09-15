#include<iostream>
#include<vector>
using namespace std;
int main()
{
		int d,n,m,stop;
		cin>>d>>m;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		stop=m;
		vector<int> vis(n,0);
		bool no=0;
		int i=0;
		int count=0;
		while(1)
		{
				if(stop>=d)
				{
						no=0;
						break;
				}
				else
						if(stop>a[i])
						{
								if(i==n-1)
								{
										if(a[i]+m<d)
										{
												no=1;
												break;
										}
										else
										{
												count++;
												no=0;
												break;
										}
								}
								i++;
								continue;
						}
			else
			{
					if(stop==a[i])
					{
							stop=a[i]+m;
							count++;
							vis[i]=1;
							i++;
							continue;
					}
					else
					{
							if(i==0)
							{
									no=1;
									break;
							}
							else
							{
									if(!vis[i])
									{
											if(a[i-1]+m>=a[i])
											{
													stop=a[i-1]+m;
													count++;
													vis[i-1]=1;
													i++;
													continue;
											}
											else
											{
													no=1;
													break;
											}
									}
									else
									{
											no=1;
											break;
									}
							}
					}
			}
		}
		if(no)
				cout<<"-1";
		else
				cout<<count;
}
