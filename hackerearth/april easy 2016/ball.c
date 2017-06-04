#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int *a,*b,N,Max;
void sort();
int search(int);
int main()
{
	a=( int*)malloc(sizeof(  int)*1000000000);
	b=( int*)malloc(sizeof(  int)*1000000000);
	int i,k,j,avail,count=0,sqr,Max,Max1,Max2;
	scanf("%d",&N);
	if (N<1 || N>1000000)
	{
		return 0;
	}
	else
	{
		for (i = 1; i <= N; i++)
		{
			scanf("%d",&a[i]);
		}
		sort();
		Max2=a[N];
		for (i = 1; i <= N; i++)
		{
			if (sqre(a[i]))
			{
				sqr=sqrt(a[i]);
				if (b[sqr]==0)
				{
					b[sqr]=a[i];
					a[i]=0;
				}
			}
		}
		for (i = 1; i <= N; ++i)
		{
			j=1;
			if(a[i]!=0)
			{
				sqr=sqrt(a[i]);
				while(1)
				{
					if(b[sqr+j]!=0)
					{
						j++;
					}
					else
					{
						b[sqr+j]=a[i];
						Max1=sqr+j;
						break;
					}
				}
			}	
		}
		if(sqre(Max2))
		{
			Max=sqrt(a[N]);
		}
		else
		{
			Max=Max1;
		}
		/*for (i = 1; i <= Max; i++)
		{
			printf("b[%d]:%d a:%d ",i,b[i],a[i] );
		}*/
		for (i = 1; i <= Max; ++i)
		{
			if (b[i]<(i*i))
			{
				count=count+((i*i)-b[i]);
			}
			else
			{

			}
		}
		printf("%d\n",count );
	}
	return 0;
}
void sort()
{
	int c,d,t;
	for (c = 1 ; c <= N - 1; c++)
	{
    	d = c;
 	 	while ( d > 0 && a[d] < a[d-1]) 
 	 	{
      		t = a[d];
      		a[d] = a[d-1];
      		a[d-1] = t;
      		d--;
    	}
  	}
}
/*int search(int b)
{
	int i,l;
	for (i = 0; i <N; i++)
	{
		if (b<a[i])
		{
			l=a[i-1];
			a[i-1]=0;
			return l;
		}
		else if(b==a[i])
		{
			l=a[i];
			a[i]=0;
			return l;
		}
		else
		{
			
		}		
	}	
	l=a[N-1];
			a[N-1]=0;
			return l;
}*/
int sqre(int c)
{
	int k;
	k=sqrt(c);
	//printf("k:%d\n",k );
	if(k*k==c)
		return 1;
	else
		return 0;
}