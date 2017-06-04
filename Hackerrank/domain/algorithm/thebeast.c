#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i,j,a0,c=0,nof=0,not=0; 
    scanf("%d",&t);
    if(t<1 || t>20)
        {
        return 0;
    }
    else
    {
        for(a0 = 0; a0 < t; a0++)
        {
            int n; 
            scanf("%d",&n);
            if(n<1 || n>100000)
            {
               return 0;
            }
            else
            {
                //Checking by considering that start with 5's
                //because we need biggest one
                for(i=0;i<=n;i=i+3)
                {
                    if ((n-i)%5==0)//for i number of 5(i divisible by 3) we check remaining number of digit divisible by 5 or not
                    {
                        //If yes remaining will be 3's
                        if (i>nof)//we will take the string consists maximum number of 5's
                        {
                            nof=i;//no of five
                            not=n-i;//no of three
                        }
                    }
                }
                //If there no 5's is in the string
                //check for 3's
                if (nof==0)
                {
                    for(i=0;i<=n;i=i+5)
                    {
                        if ((n-i)%3==0)
                        {
                            if (i>not)
                            {
                                not=i;//no five in the string not will be the number of three
                            }
                        }
                    }
                }
                if (nof==0 && not==0)
                {
                    printf("-1\n");
                }
                else 
                {
                    for (i = 0; i < nof; ++i)
                    {
                        printf("5");
                    }
                    for (i = 0; i < not; ++i)
                    {
                        printf("3");
                    }
                    printf("\n");
                }
            }
            nof=0;
            not=0;
        }
    }
    return 0;
}
