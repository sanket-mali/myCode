#include<stdio.h>
int length(int a[])
{
    int i=0,count=0;
    while(a[i]!=2)
    {
        count++;
        i++;
    }
return count;
}

int value(int i)
{
    int n=0;
    int m;
    int s[1000],t[1000],j,k,l,track=1;
    for(m=0;m<1000;m++)
    {
        s[m]=2;
        t[m]=2;
    }
    s[0]=0;
    while(1)
    {
        for(j=0;j<length(s);j++)
        {
            t[j]=1-s[j];
        }
        for(k=track,l=0;l<length(t);k++,l++)
        {
            s[k]=t[l];
        }
        track=k;
        if(length(s)>i)
        {
           break;
        }
        n++;
    }
    return s[i];
}
int main()
{
    int str[1000];
    int n,t,i=0;
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%d",&n);
        int ans=value(n);
        printf("%d\n",ans);
        i++;
    }
    return 0;
}