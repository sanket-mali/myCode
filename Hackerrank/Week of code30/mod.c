#include<stdio.h>
int main(void)
{
    int n,q,A[10000],left,right,x,y;
    scanf("%d",&n);
    scanf("%d",&q);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<q;i++)
    {
        scanf("%d",&left);
        scanf("%d",&right);
        scanf("%d",&x);
        scanf("%d",&y);
        //printf("l:%d r:%d x:%d y:%d\n",left,right,x,y);
        int j,count=0;
        for(j=left;j<=right;j++)
        {
            //printf("j:%d mod:%d==y:%d",j,(A[]))
            if(A[j]%x==y)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
