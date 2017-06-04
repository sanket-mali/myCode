#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s[10000];
	int n,i;
    scanf("%d",&n);
    if (n>10000)
    {
    	/* code */
    	exit;
    }
    else{
	for(i=0;i<=n;i++)
		{
		scanf("%c",&s[i]);
		}
		if (finda(s) && finde(s) && findi(s) && findo(s) && findu(s))
	{
		/* code */
		printf("YES\n");
	}
	else
		printf("NO\n");
}

}
int finda(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='a')
			return 1;
	}
	return 0;
}
int finde(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='e')
			return 1;
	}
	return 0;
}
int findi(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='i')
			return 1;
	}
	return 0;
}
int findo(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='o')
			return 1;
	}
	return 0;
}
int findu(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='u')
			return 1;
	}
	return 0;
}