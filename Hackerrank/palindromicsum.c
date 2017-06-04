#include <stdio.h>
#include <math.h>
void palsum(int,int);
int pal(int);
int check(int,int);
int *arr,*ans;
int count=0;
int main()
{
    arr = malloc(sizeof(int)*100000001);
    ans = malloc(sizeof(int)*100000001);
    if(!arr ||!ans)
    {
        printf("Could not allocate contiguous block\n");
        return -1;
    }
	int T,N,d,i,j,sum=0;
	scanf("%d",&T);
	if(T>20 && T<1)
	{
		return 0;
	}
	else
	{
		for (i = 0; i < T; i++)
		{
			scanf("%d",&N);
			if (N<1 && N>1000000000)
			{
				return 0;
			}
			else
			{
				scanf("%d",&d);
				if (d<1 && d>1000000000)
				{

					return 0;
				}
				else
				{

					palsum(N,d);
					int l,gr=0;
					for(l=0;l<count;l++)
					{
						gr=gr+ans[l];
					}
					printf("%d\n",gr );
					gr=0;
					count=0;
				}
			}
		}
	}
	return 0;
}
void palsum(int a,int b)
{
	int i,j=0,square,k,l=0,c=0;
	long int sum=0;
	for (i = 1; i*i < a; i++)
	{
			arr[i]=i*i;
			j++;
	}
	for (i = 1;i < j;i++)
	{
		for (k = i; k < j; k=k+b)
		{
			sum=sum+arr[k];
			c++;
			if(pal(sum) && sum<a && c>1 && check(j,sum))
			{
				ans[l]=sum;
				count++;
				l++;
			}

		}
		c=0;
		sum=0;
	}
}
int pal(int x)
{
	int r,n,rex=0,c=0;
	n=x;
	while(x!=0)
	{
		r=x%10;
		if (r==0 && c==0)
		{
			return 0;
		}
		c++;
		rex=rex*10+r;
		x=x/10;

	}
	if (n==rex)
	{
		return 1;
	}
	return 0;
}
int check(int a,int b)
{
	int i;
	for (i = 0; i < a; i++)
	{
		if(arr[i]==b)
		{
			return 0;
		}
	}
	return 1;
}
