#include<stdio.h>
long long int arr[100000],n;
int binarysearch(int item)
{
	int i,count=0;
	for (i = 0; i < n; ++i)
	{
		if (arr[i]==item)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int i,t,j,c=1;
	long long int test1,test2;
	scanf("%d",&t);
	for (j = 0; j < t; ++j)
	{
		scanf("%lld",&n);
		for (i = 0; i < n; ++i)
		{
			scanf("%lld",&arr[i]);
		}
		for (i = 0; i < n; ++i)
		{
			test2=arr[i]+1;
			test1=arr[i]-1;
			if(binarysearch(arr[i])>1)
			{
				printf("%lld\n", arr[i]);
				break;
			}
			else if((binarysearch(test1) || binarysearch(test2)))
			{
				
			}
			else
				printf("%lld\n",arr[i] );
		}
	}
	return 0;
}