#include<stdio.h>
int main()
{
	int arr[1000],t,i,n,m,x,j;
	scanf("%d",&t);
	for (i = 0; i < t; ++i)
	{
		scanf("%d %d",&n,&m);
		for (j = 1; j <= n; ++j)
		{
			arr[j]=1;
		}
		//if (n>m)
		{
			for (j = 1; j <= m; ++j)
			{
				scanf("%d",&x);
				arr[x]=2;
			}
		}
		//else if (m==n)
		{
		//	for (j = 1; j <= n; ++j)
			{
		//		arr[j]=2;
			}
		}
		//else
		{
		//	return 0;
		}
		/*for (j = 1; j <= n; ++j)
		{
			printf("%d",arr[j] );
		}
		printf("\n");*/
		int count=0;
		for (j = 1; j <= n; ++j)
		{
			if (arr[j]==1)
			{
				count++;
				if (count%2!=0)
				{
					printf("%d ",j );
				}
			}
		}
		printf("\n");
		count=0;
		for (j = 1; j <= n; ++j)
		{
			if (arr[j]==1)
			{
				count++;
				if (count%2==0)
				{
					printf("%d ",j );
				}
			}
		}
		printf("\n");
	}
	return 0;
}