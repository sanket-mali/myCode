#include <stdio.h>

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
			for(j=0;j<r;j++)
			{
				for(k=0;k<c;k++)
				{
					if(j==0 || j==r-1)
					{
							printf("*");
					}
					else
					{
						if (k==0 || k==c-1)
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
			printf("\n");
		}
	}
	return 0;
}