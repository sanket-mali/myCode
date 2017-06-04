#include<stdio.h>
int main()
{
	long long int n,m,a;
	scanf("%lli%lli%lli",&n,&m,&a);
	long long int count1=0,count2=0;
	if((n/a)*a<n)
	{
		count1+=(n/a)+1;
	}
	if ((n/a)*a==n)
	{
		count1+=(n/a);
	}
	if((m/a)*a<m)
	{
		count2+=(m/a)+1;
	}
	if ((m/a)*a==m)
	{
		count2+=(m/a);
	}
	printf("%lli\n",count2*count1 );
}