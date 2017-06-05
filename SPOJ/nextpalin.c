#include<stdio.h>
#include<string.h>
void add(int [],int);
void reverse(int [],int);
int main()
{
	int i=0,number[100000],count=0,t,j=0,k=0;
	char c;
	scanf("%d",&t);
	for (i = 0; i <= t; i++)
	{
	while((c=getchar())!='\n')
	{
		count++;
		number[j++]=c-48;
	}
	/*if (count>1000000)
	{
		return 0;
	}
	else
	{*/
	
		//while(k<1000000)
		{
			add(number,count);
			for (j = 0; j < count; j++)
				{
					printf("%d", number[j]);
				}
				printf("\n");
			if (ispal(number,count))
				printf("ok\n");
			/*{
				for (j = 0; j < count; j++)
				{
					printf("%d", number[j]);
					//printf("ok\n");
				}
				break;
			}*/
			//k++;
		}
	//}
				printf("\n");
	}
	return 0;
}
void reverse(int a[],int b)
{
 int i,j,temp;
 j=b-1;
 for (i = 0; i < b/2; i++)
 {
 	temp=a[i];
 	a[i]=a[j];
 	a[j]=temp;
 	j--;
 }
}
int ispal(int a[],int b)
{
	int i,rev[100000];
	if (a[b-1]==0)
	{
		return 0;
	}
	else
	{
	for (i = 0; i < b; ++i)
	{
		rev[i]=a[i];
	}
	reverse(a,b);
	for (i = 0; i < b; ++i)
	{
		if (a[i]==rev[i])
		{
			return 1;
		}
		else
			return 0;
	}
 	}
}
void add(int a[],int b)
{
	int i,carry=0;
	for (i = b-1; i >= 0; i--)
	{
		//printf("ok:%d \n",a[i]);
		
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