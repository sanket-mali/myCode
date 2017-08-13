#include<stdio.h>
long long int prime[250000000];
//long long int prime2[250000000];
//long long int prime3[250000000];
//long long int prime4[250000000];
long long int m,n;
void primetest()
{
	//printf("%lli %lli\n",m,n );
	long long int i,j;
	for (i = 0; i <= n; ++i)
	{
		prime[i]=1;
		//prime2[i]=1;
		//prime3[i]=1;
		//prime4[i]=1;
	}
	for (i = 2; i*i < n; ++i)
	{
		if (prime[i]==1)
		{
			for(j=i*2;j<=n;j=j+i)
			{
				prime[j]=0;
			}
		}
	}
	prime[1]=0;
	//prime[1]=0;
	//prime[1]=0;
	//prime[1]=0;
	for (i = m; i <= n; ++i)
	{
		if (prime[i]==1)
		{
				printf("%lli\n",i );
		}
	}

}
int main()
{
	int t,i=0;
	scanf("%d",&t);
	while(i<t)
	{
		scanf("%lli %lli",&m,&n);
		primetest();
		i++;
	}
	return 1;
}
