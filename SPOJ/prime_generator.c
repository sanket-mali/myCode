//Incomplete
#include <stdio.h>
int main() {
	int a,b,i,p;
    int ar[1000000];
	int t,j;
	scanf("%d",&t);
	if(t>10 && t<0 )
	{
		return 0;
	}
	else
	{
		for (j = 0; j < t; j++)
		{
			scanf("%d %d",&b,&a);
			if (a<1 && b<1 && a>1000000000 && b>1000000000 & (a-b)>100000)
			{
				return 0;
			}
			else
			{
				for (i = 2; i <= a; i++)
				{
					ar[i]=1;
				}
				for(i=2;i*i<=a;i++)
				{
					if(ar[i])
					{
						for (p = i*2; p <= a; p=p+i)
						{
							ar[p]=0;
						}
					}
				}
				for (i = b; i <= a; i++)
				{
					if (ar[i])
					{
						printf("%d\n",i );
					}
				}
			}
		}
	}
	return 0;
}
