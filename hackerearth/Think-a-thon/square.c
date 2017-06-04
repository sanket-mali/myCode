#include<stdio.h>
#include<math.h>
float dist(float,float,float,float);
void quicksort(int,int);
float distance[1000];
float x[1000],y[1000];
int main()
{
	int N,i;
	scanf("%d",&N);
	if (N<2 || N>1000)
	{
		return 0;
	}
	else
	{
		for(i=0;i<N;i++)
		{
			scanf("%f %f",&x[i],&y[i]);
		}
		/*for(i=1;i<N;i++)
		{
			distance[i-1]=dist(a[0].x,a[0].y,a[i].x,a[i].y);
		}*/
		int d,t1;
		for (i = 0 ; i <N; i++) 
		{
    		d = i;
 			while ( d > 0 && x[d] < x[d-1] ) {
      			t1=x[d];
      			x[d]=x[d-1];
      			x[d-1] = t1;
 				d--;
    		}
  		}
  		for (i = 0 ; i <N; i++) 
		{
    		d = i;
 			while ( d > 0 && y[d] < y[d-1] ) {
      			t1=y[d];
      			y[d]=y[d-1];
      			y[d-1] = t1;
 				d--;
    		}
  		}
  		/*for(i=0;i<N;i++)
		{
			printf("x:%f y:%f",x[i],y[i]);
		}*/
		float min_width,min_height;
		min_width=(-1)*(x[N-1]-x[0]);
		min_height=(-1)*(y[N-1]-y[0]);
		if (min_width>min_height)
		{
			printf("%.4f\n",(-1)*(min_height/sqrt(2)));	
		}
		else
		{
			printf("%.4f\n",(-1)*(min_width/sqrt(2)));
		}
		//printf("%.4f\n",(distance[N-2]/sqrt(2)) );
	}
}
float dist(float a,float b,float c,float d)
{
	float sum1,sum2;
	sum1=(c-a)*(c-a);
	sum2=(d-b)*(d-b);
	return sqrt(sum1+sum2);
}


