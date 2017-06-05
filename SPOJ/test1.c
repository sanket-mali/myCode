#include<stdio.h>
void print(int [],int);
int main()
{
	int i,a[200],d[200],count1=0,count2=0,j=0,*p;
	char c,e;
	//for(i=0;i<10;i++)
	{
		while((c=getchar())!='\n')
		{
		count1++;
		a[j++]=(c-48);
		}
		j=0;
		while((e=getchar())!='\n')
		{
		count2++;
		d[j++]=e-48;
		}
		//div(a,count1);//divide by 2
		//print(b,len);//print div
		//add(a,d,count1,count2);
		print(a,count1);//print intput
		print(d,count2);//print input
		//print(sum,count1);
	}
	return 0;
}
void print(int a[],int c)
{
	int i;
	for (i = 0; i < c; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}