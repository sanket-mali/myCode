//@author: Sanket Kumar Mali
//Leet code- Hamming Distance
//by xoring the two numbers we can identify the different in bits 
#include<stdio.h>
int hammingDistance(int x, int y) {
    int a,b[40];
    a=x^y; //Xoring means output contains 1 wherever there are bit difference in two number 
    int n,r,i=0;
    n=a;
    while(n!=0)
    {
        r=n%2;//convert the xored output to binary
        b[i]=r;
        n/=2;
        i++;
    }
    int j,count=0;
    for(j=0;j<i;j++)
    {
        if(b[j]==1)// count the number of 1
        count++;
    }
    printf("%d\n",a);
    return count;
}
int main()
{
    printf("\n%d\n",hammingDistance(0,2147483647));
    return 0;
}













































/*void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
int hammingDistance(int x, int y) {
    int a[40],b[40],r,n,i,cx,cy;
    
    //if(x!=0)
    {
        n=x;
        i=0;
        while(n!=0)
        {
            r=n%2;
            a[i]=r;
            n/=2;
            i++;
        }
        cx=i;
    }
   /* else
    {
        a[0]=0;
    }*/
   // if(y!=0)*/
   /* {
        i=0;
        n=y;
        while(n!=0)
        {
            r=n%2;
            b[i]=r;
            n/=2;
            i++;
        }
        cy=i;
    }
   /* else
    {
        b[0]=0;
        printf("ok\n");
    }*/
    /*printf("ok\n");
    int max;
    if(cx>cy)
    max=cx;
    else
    max=cy;
    int count=0;
    for(i=0;i<max;i++)
    {
        if(a[i]!=1)
        {
            a[i]=0;
        }
        if(b[i]!=1)
        {
            b[i]=0;
        }
        if(a[i]!=b[i])
        {
            count++;
        }
    }
    printf("\n%d\n",max);
    printf("\n");
    print(a,max);
    printf("\n");
    print(b,max);
    //printf("\n%d\n",count);
    return count;
}
int main()
{
    printf("\n%d\n",hammingDistance(5123,0));
    return 0;
}*/
