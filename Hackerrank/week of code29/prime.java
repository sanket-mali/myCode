import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
class prime{
	public static void main(String[] args) 
	{	
		int i=0;
		BigInteger m,n;
		BigInteger[] prime=new BigInteger[1000000000];
		try(Scanner sc = new Scanner(System.in))
		{
			m=sc.nextBigInteger();
			n=sc.nextBigInteger();
			
			for (i = 0; i <= n; ++i)
			{
				prime[i]=1;
			}
			for (i = 2; i*i < n; ++i)
			{
				if (prime[i]==1)
				{
					for(j=i*2;j<=n;j=j+i)
					{
						prime[j]=0;
					}
				}
			}
			prime[1]=0;
			long long int n1,r,flag=0,c=0;
			for (i = m; i <= n; ++i)
			{
				flag=0;
				if (prime[i]==1)
				{
					n1=i;
					while(n1)
					{
						r=n1%10;
						n1/=10;
						if (prime[r]==1)
						{				
						}
						else
						{
							flag=1;
							break;
						}
					}
					if (!flag)
					{
						c++;
					}
				}
			}
			printf("%lli\n",c );
			/*while(i<n)
			{
				System.out.println(array[i]+" ");
				i++;
			}*/
		}
		catch(Exception e)
		{

		}
	}
}