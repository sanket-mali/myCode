#include<stdio.h>
int main()
{
     int a,b,r;
     scanf("%d %d",&a,&b);
     r=a-b;
     if(r%10==9)
     printf("%d\n",r-1);
     else if(r%10==0)
     printf("%d\n",r+1);
     else
     printf("%d\n",r+1);    
     return 0;
}