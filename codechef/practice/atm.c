#include <stdio.h>

int main()
{
    float x,p;
    scanf("%f",&x);
    scanf("%f",&p);
    if((int)x%5!=0.0)
    printf("%.2f\n",p);
    else
    {
        if((x+0.5)>p)
        printf("%.2f\n",p);
        else
        {
            printf("%.2f\n",(p-(x+0.5)));
        }
    }
    return 0;
}

