//AUTHOR: SANKET KUMAR MALI//
//SPOJ PROBLEM - DIVISOR SUMMATION //
//===========================//
#include<stdio.h>
#include<math.h>
int main()
{
int t,n,i,j,sum=0,temp;
scanf("%d",&t);
if(t<1 && t>200000)
{
return 0;
}
else
{
	for (j = 0; j < t; j++)
	{
	scanf("%d",&n);
	if(n<1 && n>500000)
	{
		return 0;
	}
	else
	{
		if(n==1)
		{
			printf("%d",sum);
		}
		else
		{
		for ( i = 1; i <= sqrt(n); i++)//CHECK UPTO SQUAREROOT OF THE NUMBER
		{
			/* code */
			if (n%i==0)
			{
				temp=n/i;
				if (temp<n && temp!=i)//ALL THE DIVISOR BIGGER THAN SQUAREROOT VALUE IS RETRIEVED BY DEVIDING THE n BY THE i
				{
					/* code */
					sum=sum+temp;
				}
				sum=sum+i;
			}

		}
	printf("%d\n",sum );
	sum=0;
	}
	}
}
}
return 0;
}