#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N,count=0,i=1; 
    scanf("%d",&N);
    char* C = (char *)malloc(10240 * sizeof(char));
    scanf("%s",C);
    char frst=C[0];
    //printf("%c",frst);
    count=1;
    //putchar(C[2]);
    while(i<N)
    {
        if(frst!=C[i])
        {
            frst=C[i];
             i++;
            count++;
            //printf("i:%d ch:%c\n",i,frst);
        }
        else
        {
            i++;
            // printf("i:%d sa:%c\n",i,frst);
        }
    }
    printf("%d",count);
    return 0;
}