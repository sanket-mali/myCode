#include <stdio.h>
#include <string.h>
char s[100];
void re(int);
int main()
{
    int t,i=0,j,k,d;
    char c,e;
    scanf(" %d",&t);
   if(t<1 || t>10)
    {
    	return 0;
    }
    else
    {
	for(k=0;k<t;k++)
    	{
    		while ( getchar() != '\n' );
	    	while((c=getchar())!='\n')
	    	{
	    		s[i]=c;
	    		i++;
	    	}
	    	if(i<1 || i>30)
	    	{
	    		return 0;
	    	}
	    	else
	    	{
	    		re(i);
	    	}
	    	printf("\n");
	    	i=0;
    	}
    }
    return 0;
}
void re(int a)
{
	int f=0,l=a-1,i;
	char t;
	for (i = 0; i < a/2; ++i)
	{
		t=s[i];
		s[i]=s[l];
		s[l]=t;
		l--;
		printf("%c",s[i] );
	}
	for (i = a/2; i < a; ++i)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}