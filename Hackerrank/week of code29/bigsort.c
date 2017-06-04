#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char p[100000][100000];
	int i;
	char c;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		/*scanf("%d",&n);
		printf("%d\n",n );
		/***p=n;
		**p++;
		*p*/
		int j=0;
		while((c=getchar())!='\n')
		{
			//*(p[i])=c;
			p[i][j]=c;
			putchar(p[i][j]);
			j++;
			//(p[i])++;
		}
	}
	return 1;
}