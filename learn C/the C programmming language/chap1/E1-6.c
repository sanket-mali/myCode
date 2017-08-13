#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int countspace=0,counttab=0,countline=0; 
	while((i=getchar())!='@')
	{
		//printf("%d\n",i );
		
		if (i==' ')
		{
			countspace++;
		}
		if (i=='\t')
		{
			counttab++;
		}
		if (i=='\n')
		{
			countline++;
		}
		
		if (i!=' ' && i!='\t')
		{
			putchar(i);
		}
		else
		{
			//putchar(' ');
			//while(i==' ' || i=='\t')
			{

			}

		}
			
	}
	printf("no of space:%d  no of tab:%d  no of line:%d\n",countspace,counttab,countline );
	return 1;
}
