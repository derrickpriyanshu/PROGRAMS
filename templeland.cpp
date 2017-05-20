#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s;
	cin>>s;
	int flag =0;
	while(s--)
	{
		int n;
		cin>>n;
		int h[n];
		long int sum =0;
		for(int i=0;i<n;i++)
			{
				cin>>h[i];
				sum = sum + h[i];
			}
		if(n%2==0)
		{
			flag = 1;
		}
		else if(n%2!=0)
		{
			int mid = n/2;
			long int s =0;
			if(h[0]!=1)
			{
				flag=1;
			}
			else
			{
				for(int i=0;i<mid;i++)
				{
					if(h[mid]==h[i])
					{
						flag =1;
						break;
					}
					s = s +h[i];
				}
				for(int i=1;i<mid;i++)
				{
					if((h[i]-h[i-1])!=1)
					{
						flag = 1;
					}
					if(((2*s + h[mid])-sum)!=0)
					{
						flag = 1;
					}
				}
			}
		} 
		if(flag==0)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}