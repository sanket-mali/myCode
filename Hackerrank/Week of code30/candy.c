//@author: Sanket kumar Mali
#include<stdio.h>

int main(void)
{
	int i,n,t,c[100],bstart,candyAdded=0;
	scanf("%d",&n);//number of candy in bowl
	scanf("%d",&t);//number of time candy is taken
	for (i = 1; i <= t; ++i)
	{
		scanf("%d",&c[i]);//# of candy taken @ time i
	}
	bstart=n;//# of candy @ start
	for (i = 1; i <= t; ++i)
	{
		bstart=bstart-c[i];//c[i] candy is taken @ time i
		if (bstart<5 && i!=t) //if # of candy in bowl less than 5 and it is not the end of party
		{
			candyAdded+=(n-bstart);//add candy to the bowl to make it full
			bstart=n;
		}
	}
	printf("%d\n",candyAdded );
	return 0;
}