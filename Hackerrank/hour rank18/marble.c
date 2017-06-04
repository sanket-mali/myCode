//@author:Sanket Kumar Mali
#include<stdio.h>
int main()
{
	int m,n,arr[10],i,a,b,temp,j;
	scanf("%d %d",&m,&n);
	for (i = 1; i <=10 ; ++i)
	{
		arr[i]=1;
	}
	arr[m]=2;//initial pos of the marbel
	for (i = 1; i <= n; ++i)
	{
		scanf("%d %d",&a,&b);//change the position of the marbel according to the input
		temp=arr[a];
		arr[a]=arr[b];
		arr[b]=temp;
	}
	for (i = 1; i <= 10; ++i)
	{
		if (arr[i]==2)//find the position of the marbel
		{
			printf("%d\n",i );
			break;
		}
	}
	return 1;
}