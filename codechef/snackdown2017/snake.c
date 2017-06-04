#include<stdio.h>
int main()
{
    char snake[500],first,last,current,pre;
    int t,n,i,j,k,pos,check,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        check=0;
        scanf("%d",&n);
        for(j=0;j<=n;j++)
        {
            scanf("%c",&snake[j]);
        }
        for(j=0;j<=n;j++)
        {
            if(snake[j]=='H' || snake[j]=='T')
            {
                first = snake[j];
                pos=j;
                count++;
                break;
            }
        }
        for(j=0;j<=n;j++)
        {
            if(snake[j]=='H' || snake[j]=='T')
            {
                last = snake[j];
            }
        }
        if(first=='T' || last=='H')
        {
            printf("Invalid\n");
        }
        else
        {
            current =first;
            for(j=pos+2;j<=n;j++)
            {
                pre=current;
                if(snake[j]=='H' || snake[j]=='T')
                {
                    current = snake[j];
                    count++;
                }
                else
                continue;
                if((pre=='H' && current=='H') || (pre=='T' && current=='T'))
                {
                    check=1;
                }
                else
                {
                    continue;
                }
            }
            if(check==1)
            printf("Invalid\n");
            else
            printf("Valid\n");
        }
    }
    return 0;
}