#include <stdio.h>
void patt(int,int,int,int);
int main(void) {
	// your code here
	int t,i,r,c,j,k,h,w;
	scanf("%d",&t);
	if(t>=100)
	{
		return 0;
	}
	else
	{
		for(i=0;i<t;i++)
		{
			scanf("%d %d %d %d",&r,&c,&h,&w);
			patt(r,c,h,w);
			printf("\n");
		}
	}
	return 0;
}
void patt(int a,int b,int y,int z)
{
	int k,j,i;
	for (i = 0; i < (a*(y+1))+1; ++i)
	{
		for (j = 0; j < (b*(z+1))+1; ++j)
		{
			if (i%(y+1)==0)
			{
				printf("*");
			}
			else
			{
				if (j%(z+1)==0)
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