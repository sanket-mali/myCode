#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6],i,j,sum=0,sum1=-54,k,l,c=0,arr_i,arr_j;
    for(arr_i = 0; arr_i < 6; arr_i++){
       for(arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    for(k=0;k<4;k++)
    {
    for(i=0;i<4;i++)
    {
        for(j=k;j<k+3;j++)
            {
            for(l=i;l<i+3;l++)
              {
                c++;
                //printf("c:%d",c );
                if(c==4 || c==6){
                    //printf("  ");
                    }
                else
                {
                   // printf("%d ",arr[j][l] );
                sum=sum+arr[j][l];
                    
                }
            }
            //printf("\n");
        }
        c=0;
        //printf("sum:%d\n",sum );
        if(sum>sum1)
            sum1=sum;
        //printf("sum1:%d\n",sum1);
        sum=0;
    }
    //printf("\n\n");
    }
    printf("%d",sum1);
    return 0;
}

