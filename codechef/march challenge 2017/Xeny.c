#include<stdio.h>
int main()
{
	long long int t,xen[100000],yan[100000],i,j,k,n,x=0,y=0;
	scanf("%lld",&t);
	for (i = 1; i <= t; ++i)
	{
		x=0;
		y=0;
		scanf("%lld",&n);
		for (j = 1; j <=n ; ++j)
		{
			scanf("%lld",&xen[j]);
		}
		for (j = 1; j <=n ; ++j)
		{
			scanf("%lld",&yan[j]);
		}

		for (j = 1; j <= n; ++j)
		{
			if(j%2==0)
			{
				
				x=x+xen[j];
			}
			else
			{
				
				x=x+yan[j];
			}
		}
		for (j = 1; j <= n; ++j)
		{
			if(j%2==0)
			{
				y=y+yan[j];
			}
			else
				y=y+xen[j];
		}
		if (x<y)
		{
			printf("%lld\n",x);
		}
		else
			printf("%lld\n", y);
	}
	return 0;
}