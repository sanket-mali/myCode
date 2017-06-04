#include<stdio.h>
int main()
{
	int N,Q,S[100000],a,b,c,i=1,j,count=0;
	scanf("%d %d",&N,&Q);
	if (1>N || N>100000)
	{
		return 0;
	}
	else
	{
		if(1>Q || Q>100000)
		{
			return 0;
		}
		else
		{
			while(i<=N)
			{
				scanf("%d",&S[i]);
				if (S[i]<1)
				{
					return 0;
				}
				i++;
			}
				for (i = 0; i < Q; i++)
				{
					scanf("%d %d %d",&a,&b,&c);
					if(a<1 && a>N)
					{
						return 0;
					}
					else
					{
						if(b<1 && b>N)
						{
							return 0;
						}
						else
						{
							if(c>1000000000)
							{
								return 0;
							}
							else
							{
								j=a;
								if (S[a]<=c)
								{
									count++;
								}
								if (S[b]<=c)
								{
									count++;
								}
								while(j<b)
								{
									if (S[j]<=c)
									{

										count++;
									}
									j++;
								}
							}
						}
					}
					printf("%d\n",count );
					count=0;
				}
		}
	}
	return 0;
}