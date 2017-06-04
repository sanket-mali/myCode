#include<stdio.h>
int board[1000000][3];
//int obstacles[][];
int main()
{
	int n,q,i,x,y,j;
	scanf("%d %d",&n,&q);
	for (i = 1; i <= n; ++i)
	{
		board[i][1]=i;
		board[i][2]=i;
		board[i][3]=i;
	}
	for (i = 1; i <= q; ++i)
	{
		scanf("%d %d",&x,&y);
		board[x][y]=0;
	}
	printf("%d\n",q );
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= 3; ++j)
		{
			if (board[i][j]==1)
			{
				printf("%d ",board[i][j]);
			}
			else
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
	int **p,m1,m2,m3;
	j=1;
	while(j<=3)
	{
		i=1;
		while(1)
		{
			m1=board[i+1][j];
			m2=board[i+1][j+1];
			m3=board[i+1][j-1];
			if (m1==0 && m2==0 && m3==0)
			{
				break;
			}
			if (m1==0)
			{
				p[i][j]=board[i+1][j];
			}
			if (m2==0)
			{
				p[i][j]=board[i+1][j];
			}
			if (m3==0)
			{
				p[i][j]=board[i+1][j];
			}
		}
	}
}