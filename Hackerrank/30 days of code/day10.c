#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,*b,r,i=0,j,sum1=0,sum=0; 
    scanf("%d",&n);
    b=(int *)malloc(sizeof(int)*1000000);
    while(n>0)
    {
        r=n%2;
        b[i]=r;
        i++;
        n=n/2;
    }
    for(j=0;j<i;j++)
    {
        //printf("%d",b[j]);
        if(b[j]==1)
        {
            sum1++;    
        }
        else
        {
            sum1=0;    
        }
        if(sum1>sum)
            sum=sum1;
    }
    printf("%d",sum);
    return 0;
}

