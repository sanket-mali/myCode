#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    scanf("%d",&N);
    if(N<1 || N>100)
    {
        return 0;    
    }
    else
    {
        if(N%2==0)
        {
            if(N>=2 && N<=5)
            {
                printf("Not Weird\n");
            }
            else if(N>=6 && N<=20)
            {
                printf("Weird\n");
            }
            else if(N>20)
            {
                printf("Not Weird\n");    
            }
            else
            {
                
            }
        }
        else
            printf("Weird\n");
    }
    return 0;
}

