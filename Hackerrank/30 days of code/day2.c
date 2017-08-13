#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double c;
    int ti,ta;
    scanf("%lf",&c);
    scanf("%d %d",&ti,&ta);
    double tip=(c*ti)/100;
    double tax=(c*ta)/100;
    double total=c+tip+tax;
    int tot=total;
    double ch=tot;
    //printf("%lf",ch);
    if((total+0.5)>ch+1)
        {
      //  printf()
    printf("The total meal cost is %d dollars.",tot+1);
    }
    else
        {
        printf("The total meal cost is %d dollars.",tot);
    }
    return 0;
}

