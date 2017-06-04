#include<stdio.h>
#include<stdlib.h>
//#define MAX 100000;
//long long int * prime=malloc((sizeof(int)*100000));
long long prime[100000];
long long int m,n;
int main()
{
	scanf("%lli %lli",&m,&n);
	long long int i,j;
	//Sieve of Eratosthenes
	for (i = 0; i <= n; ++i)
	{
		prime[i]=1;
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
	long long int n1,r,flag=0,c=0;
	for (i = m; i <= n; ++i)
	{
		flag=0;
		if (prime[i]==1)
		{
			n1=i;
				while(n1)
				{
					r=n1%10;
					n1/=10;
					if (prime[r]==1)
					{				
					}
					else
					{
						flag=1;
						break;
					}
				}
				if (!flag)
				{
					c++;
				}
		}
	}
	printf("%lli\n",c );
	//printf("%lli %lli\n",m,n );
	return 1;
}
