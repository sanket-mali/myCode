import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
class bigsort{
	public static void main(String[] args) 
	{	
		int n,i=0;
		BigInteger[] array=new BigInteger[1000000]; //Array of element type Biginteger 
		try(Scanner sc = new Scanner(System.in))//Scanner object
		{
			n=Integer.parseInt(System.console().readLine());
			
			while(i<n)
			{
				String s=sc.nextLine();
				array[i]=new BigInteger(s);//take input of the bignumbers
				i++;
			}
			int j,k,pos;
			BigInteger check;
			BigInteger min;
			for (j=0;j<n-1 ;++j ) {
				check=array[j];
				min=array[j+1];
				pos=j+1;
				for (k=j+1;k<n-1 ;++k ) {
					if(array[k].compareTo(array[k+1])<0)//Comparison is done by compareTo function 
					{
						if (array[k].compareTo(min)<0) {
							min=array[k];
							pos=k;	
						}
					}
					else
					{
						if (array[k+1].compareTo(min)<0) {
							min=array[k+1];
							pos=k+1;	
						}
					}
				}
				if (min.compareTo(check)<0) {
					BigInteger temp;
					temp=array[pos];
					array[pos]=check;
					array[j]=min;
				}
			}
			i=0;
			while(i<n)
			{
				System.out.println(array[i]+" ");
				i++;
			}
		}
		catch(Exception e)
		{

		}
	}
}