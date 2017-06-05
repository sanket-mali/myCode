//Accepted
#include<stdio.h>
#include<string.h>
int top,top1=-1,top2=-1;
int main()
{
	int i,strlen=0,j=0,k=0,t,l;
	char expr[100000],c;
	char ans[100000],temp,operator[100000];
	scanf("%d",&t);
	if(t>100)
	{
		return 0;
	}
	else
	{
		for (l = 0; l <= t; l++)
		{
		while((c=getchar())!='\n')
		{
			expr[i++]=c;
			strlen++;
		}
		top=strlen;
		if (strlen>400)
		{
			return 0;
		}
		else
		{
		for (i = 0; i < strlen; i++)
		{
			temp=expr[i];
			switch(temp)
			{
				case '(':
					break;
				case '+':
						operator[j]=temp;
						j++;
						break;
				case '-':operator[j]=temp;
						j++;
						break;
				case '*':operator[j]=temp;
						j++;
						break;
				case '/':operator[j]=temp;
						j++;
						break;
				case '^':operator[j]=temp;
						j++;
						break;
				case ')':
						ans[k]=operator[j-1];
						
						j--;
						k++;
						break;
				default:
						ans[k]=temp;
						k++;
				break;
			}
		}
		for (i = 0; i < k; i++)
		{
			printf("%c",ans[i] );
		}
		printf("\n");
		}
		k=0,j=0,strlen=0,i=0;
	}
	}
}