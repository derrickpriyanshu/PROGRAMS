#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	int k =0;
	int r;
	cin>>r;
	while(r--)
	{
		cin>>l;
		int flag = 0;
		int counth = 0; int countt = 0;
		char str2[l];
		char str[l];
		cin>>str;

		for(int i=0;i<l;i++)
		{
			if(str[i]!='.')
			{
				str2[k]=str[i];
				k++;
			}
		}
		/*for(int i=0;i<l;i++)
			{
				if(str[i]!='.')
				{
					str2[k] = str[i];
					if(str2[k]=='H')
					{
						counth++;
					}
					else if(str2[k]=='T')
					{
						countt++;
					}
					k++;
				}
			}*/
			for(int i=0;i<k;i++)
				{	
					if(str2[i]==str2[i+1])
					{
						flag = 1;
					}
				}	
			if(str2[0]=='T')
			{
				flag = 1;
			}
			/*else if(counth==countt)
			{
				for(int i=0;i<k;i++)
				{	
					if(str2[i]==str2[i+1])
					{
						flag = 1;
					}
				}
			}*/
			else
			{
				flag = 1;
			}
		
		if(flag==0)
		{
			cout<<"Valid"<<endl;
		}
		else if(flag==1)
		{
			cout<<"Invalid"<<endl;
		}
	}
	return 0;
}
