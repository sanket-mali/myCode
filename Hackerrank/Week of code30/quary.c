#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max(int c,int d)
{
    return (c>d)?c:d;
}
int sub(char *a,char *b,int m,int n)
{
    int LCSuff[m+1][n+1],i,j;
    int result = 0;
    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (a[i-1] == b[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main(void)
{
    char a[1000][1000],c,b[100];
    int i,m,n,x,y,p,q,j=0;
    scanf("%d",&x);
    scanf("%d",&y);
    for(i=0;i<x;i++)
    {
        scanf ("%s",a[i]);
        //*a[i]=b;*/
    }
    for(i=0;i<y;i++)
    {
        scanf("%d",&p);
        scanf("%d",&q);
        m=strlen(a[p]);
        n=strlen(a[q]);
        printf("%d\n",sub(a[p],a[q],m,n));
    }

//printf("m:%d n:%d",m,n);
    return 0;
}

