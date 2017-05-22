#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	//cin>>t;
	while(t--)
	{
		int n,q;
		//cin>>n>>q;
		scanf("%d %d",&n,&q);
		long long int arr[n];
		long long int k;
		int flag =0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}	
		while(q--)
		{
			//cin>>k;
			scanf("%lld",&k);
			long int count = 0;
			for(int i=0;i<n;i++)
			{
				if(arr[i]>=k)
				{
					count++;
					//flag=1;
				}
				else
				{
					//int num=arr[i];
					for(int j=0;j<n;j++)
					{
						if(arr[j]<arr[i] && (arr[i]+1)==k)
						{
							count++;
							arr[i]=arr[i]+1;
							//flag=1;
						}
					}
				}
			}
			printf("%ld",count);
			//cout<<count<<endl;
		}
	}
	return 0;
}