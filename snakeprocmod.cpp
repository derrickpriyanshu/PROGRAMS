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
		char str2[500];
		char str[500];
		cin>>str;
		/*while(l>0)
		{
			char ch;
			cin>>ch;
			if(ch!='.')
			{
				str[k]=ch;
				if(str[k]=='H')
				{
					counth++;
				}
				else if(str[k]=='T')
				{
					countt++;
				}
				k++;
			}
			l--;
		}*/
		for(int i=0;i<strlen(str);i++)
			{
				if(str[i]!='.')
				{
					str2[k] = str[i];
					k++;
				}
			}
		for(int i=0;i<k;i++)
		{
			if(str2[i]=='H')
				{counth++;}
			else if(str2[i]=='T')
				{countt++;}
		}
			
			if(str2[0]=='T')
			{
				flag = 1;
			}
			else if(counth==countt)
			{
				for(int i=0;i<k;i++)
				{	
					if(str2[i]==str2[i+1])
					{
						flag = 1;
					}
				}
			}
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
}