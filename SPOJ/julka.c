import java.io.*;
import java.utill.*
void print(int [],int);
void div(int [],int);
void add(int [],int [],int,int);
void subt(int [],int [],int,int);
void trim(int [],int);
void clear(int [],int);
int len=0,b[200],sum[200],sub[200],l[200];
int main()
{
	int i,a[200],d[200],k[200],count1=0,count2=0,j=0,p[200],q[200];
	char c,e;
	a[0]=0,d[0]=0,p[0]=0;
	for(i=0;i<10;i++)
	{
		while((c=getchar())!='\n')
		{
		++count1;
		a[++j]=c-48;
		}
		j=0;
		while((e=getchar())!='\n')
		{
		++count2;
		k[j]=0;
		d[++j]=e-48;
		}
				if (count2<count1)
				{
					for (j = 1; j <= count1; j++)
						{
							k[j+(count1-count2)]=d[j];
							q[j+(count1-count2)]=d[j];
							p[j]=a[j];
						}
						for (j = 0; j <= count1-count2; j++)
						{
							k[j]=0;
							q[j]=0;
						}
						add(a,q,count1,count2);
						div(sum,count1);//divide by 2
						trim(l,count1);	
					}
				}
				else if(count1==count2)
				{
						for (j = 1; j <= count1; j++)
						{
							k[j]=d[j];
							q[j]=d[j];
							p[j]=a[j];
						}
						add(a,d,count1,count2);
						div(sum,count1);//divide by 2
						trim(l,count1);
				}
				else
				{
					continue;
				}
				subt(p,k,count1,count2);
				div(sub,count1);//divide by 2
				trim(l,count1);
				clear(l,count1);
				clear(k,count1);
		}
	}
	return 0;
}
void print(int a[],int c)
{
	int i;
	for (i = 0; i <= c; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

void div(int a[],int c)
{
	int i=0,num,r,z;
	num=a[0];
	while(i<=c)
	{
		if (num>=2)
		{
			l[i]=num/2;
			r=num-((num/2)*2);
			num=r;
		}
		else
		{
			num=num*10+a[i+1];
			i++;
		}
	}
	}

/*int* div(int a[],int c)
{
	
	int carry=0,pos=0;
	while(pos<c)
	{
		if(carry!=0)
			a[pos]+=carry*10;
		b[pos]=a[pos]/3;
		carry=a[pos++]%3;
	}
	print(b,pos);
	}*/
void add(int a[],int b[],int c,int d)
{
	int i,j,car=0;
	for (i = c; i >= 0; i--)
	{
		if(car==0)
		{
			sum[i]=(a[i]+b[i])%10;
			car=(a[i]+b[i])/10;
		}
		else
		{
			sum[i]=((a[i]+b[i])+1)%10;
			car=((a[i]+b[i])+1)/10;
		}
	}
}
void subt(int a[],int b[],int c,int d)
{
	int i,car=0;
	for (i = c; i >= 0; i--)
	{
			if(car==0)
			{
			if (a[i]<b[i])
			{
				a[i]=10+a[i];
				sub[i]=a[i]-b[i];
				car=1;
			}
			else
			{
				sub[i]=a[i]-b[i];
				car=0;
			}
			}
			else
			{
				b[i]=b[i]+1;
				if (a[i]<b[i])
				{
					a[i]=10+a[i];
					sub[i]=a[i]-b[i];
					car=1;
				}
				else
				{
					sub[i]=a[i]-b[i];	
					car=0;
				}
			}
	}
}
void trim(int a[],int c)
{
	int i=0;
	while(a[i]==0)
	{
		i++;
	}
	while(i<=c)
	{
		printf("%d",a[i] );
		i++;
	}
	printf("\n");
}
void clear(int a[],int c)
{
	int i;
	for (i = 0; i < c; ++i)
	{
		a[i]=0;
	}
}
int check(int a[],int c)
{
	int i=0,ca=0;
	while(i<=c)
	{
		if(a[i]!=0)
			ca=1;
		i++;
	}
	return ca;
}
int big(int a[],int b[],int c)
{
	int i=0;
	while(i<c)
	{
		if(a[i]==b[i])
		{
			if(a[i+1]>b[i+1])
				return 1;
			else
				return 2;
		}
		else
		{
			printf("a:%d b:%d\n",a[i],b[i] );
			if(a[i]>b[i])
				return 1;
			else
				return 2;
		}
	}
}