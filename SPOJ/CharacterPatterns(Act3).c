#include <stdio.h>
void patt(int,int);
int main(void) {
	// your code here
	int t,i,r,c,j,k;
	scanf("%d",&t);
	if(t>=100)
	{
		return 0;
	}
	else
	{
		for(i=0;i<t;i++)
		{
			scanf("%d %d",&r,&c);
			patt(r,c);
			printf("\n");
		}
	}
	return 0;
}
void patt(int a,int b)
{
	int k,j,i;
	for (i = 0; i < (a*3)+1; ++i)
	{
		for (j = 0; j < (b*3)+1; ++j)
		{
			if (i%3==0)
			{
				printf("*");
			}
			else
			{
				if (j%3==0)
				{
					printf("*");
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}