#include <stdio.h>
#include <string.h>
 
int main(void) {
	// your code here
	int t,i,j;
	char c[201];
	scanf("%d ",&t);
	if(t<1 && t>100)
	{
		return 0;
	}
	else
	{
		for(i=0;i<t;i++)
		{
			scanf("%[^\n]%*c",c);
				for(j=0;j<(strlen(c)/2);j=j+2)
				{
					printf("%c",c[j]);
				}
			printf("\n");
		}
	}
	return 0;
}