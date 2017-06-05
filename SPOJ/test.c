#include<stdio.h>
#include<string.h>
void add(int [],int);
int main()
{
	int i=0,number[100000],count=0,t;
	char c;
	scanf("%d",&t);
	if (t<0)
	{
		/* code */
	}
	else
	{
	while((c=getchar())!='\n')
	{
		count++;
		number[i++]=c-48;
	}
	printf("%d\n",count );
	for (i = 0; i < count; ++i)
	{
		printf("%d",number[i] );
	}
	printf("\n");
	printf("ok\n");
	//add(number,count);
	printf("ok\n");
	for (i = 0; i < count; ++i)
	{
		//printf("ok\n");
		//printf("%d",number[i] );
	}
	printf("ok\n");
}
	return 0;
}
void add(int a[],int b)
{
	int i,carry=0;
	for (i = b-1; i >= 0; i--)
	{
		if (carry==0)
		{
			if(a[i]==9)
			{
			a[i]=0;
			carry=1;
			}
			else
			{
				a[i]=a[i]+1;
				if(a[i]<=9);
				break;
			}
		}
		else if(carry==1)
		{
			if(a[i]==9)
			{
			a[i]=0;
			carry=1;
			}
			else
			{
				a[i]=a[i]+1;
				if(a[i]<=9);
				break;
			}
		}
		else
		{

		}

	}
}