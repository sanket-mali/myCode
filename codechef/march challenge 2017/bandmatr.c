#include<stdio.h>
int main(void)
{
	int t,arr[500][500],n,i,j,l,k,s,arr1[500];
	scanf("%d",&t);
	for ( i = 0; i < t; ++i)
	{
		k=0;
		scanf("%d",&n);
		for (j = 0; j < n; ++j)
		{
			for (l = 0; l < n; ++l)
			{
				scanf("%d",&arr[j][l]);
			}
		}
		for (j = 0; j < n; ++j)
		{
			for (l = 0; l < n; ++l)
			{
				if (j>=l)
				{
					printf("arr[%d][%d]:%d\n",j,l,arr[j][l] );
					arr1[j-l]=arr[j][l];
					//printf("arr1[%d]:%d\n",j-l,arr1[j-l] );
					/*if (arr1[j-l])
					{
						break;
					}*/
				}
				if (l>j)
				{
					printf("arr[%d][%d]:%d\n",j,l,arr[j][l] );
					arr1[l-j]=arr[j][l];
					//printf("arr1[%d]:%d\n",l-j,arr1[l-j] );
					/*if (arr1[j-l])
					{
						break;
					}*/
				}
			}
		}
		int count=n-1;
		for (j = 0; j<n; j++)
		{
			printf("%d ",arr1[j] );
		}
		printf("\n");
		for (j = n-1; j >=0; j--)
		{
			//printf("%d ",arr1[j] );
			if (arr1[j]!=1)
			{
				count--;
			}
			else
				break;
		}
		printf("\n%d\n",count);

	}
	return 0;
}