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
		char str2[l];
		char str[l];
		cin>>str;
		int counth = 0; int countt = 0;

		for(int i=0;i<strlen(str);i++)
			{
				if(str[i]!='.')
				{
					str2[k] = str[i];
					k++;
				}
			}
			//cout<<str2<<endl;
		for(int i=0;i<k;i++)
		{
			if(str2[i]=='H')
				{counth++;}
			else if(str2[i]=='T')
				{countt++;}
		}
		//cout<<counth<<"  "<<countt<<endl;
		if(str2[0]=='T')
		{
			flag = 1;
		}
		else if(counth==countt && str[0]=='H')
		{
			for(int i=0;i<strlen(str2);i++)
			{	
				if(str2[i]==str2[i+1])
				{
					flag = 1;
				}
			}
		}
		else
		{
			flag = 0;
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