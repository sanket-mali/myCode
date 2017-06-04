#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if (year==1918)
	{
		printf("27.08.1918\n");
	}
	else if (year>1918)
	{
		if (year%400==0||(year%4==0 && year%100!=0))
		{
			//leap year
			printf("12.09.%d\n",year );
		}
		else
		{
			printf("13.09.%d\n",year );
		}
	}
	else
	{
		if (year%4==0)
		{
			//leap year
			printf("12.09.%d\n",year );
		}
		else
		{
			printf("13.09.%d\n",year );
		}
	}
}