#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char *s;
    int t;
    scanf("%d",&t);
    int k;
    for(k=0;k<t;k++)
    {
        s=(char *)malloc(sizeof(char)*10000);
        scanf("%s",s);
        int i,j,flag=0;
        for(i=1,j=strlen(s)-1;i<strlen(s)-1,j>0;i++,j--)
        {
            int dif1,dif2;
            dif1=(s[i]-s[i-1]);
            dif2=(s[j-1]-s[j]);
            if (dif1<0)
            {
               dif1=(-1)*dif1;
            }
            if(dif2<0)
            {
               dif2=(-1)*dif2;
            }
            if(dif1==dif2)
            {
                   
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("Not Funny\n");    
        }
        else
            printf("Funny\n");
        flag=0;
    }
    return 0;
}

