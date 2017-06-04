#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,sum=1,a0; 
    scanf("%d",&t);
    if(t<1 || t>10)
    {
        return 0;
    }
    else
    {
    for(a0 = 0; a0 < t; a0++)
    {
        int n,i; 
        scanf("%d",&n);
        if(n<0 || n>60)
        {
            return 0;    
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    sum=sum*2;   
                }
                else
                {
                    sum=sum+1;
                }
            }
        }
        printf("%d\n",sum);
        sum=1;
    }
    }
    return 0;
}