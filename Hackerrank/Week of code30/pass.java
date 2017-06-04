import java.io.*;
import java.util.Scanner;

class Pass{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n;
		n=sc.nextInt();
		System.out.println(n);
		/*for(int i=0;i<n;i++)
		{
			if (i%2==0) {

				
			}
		}*/
		char c1,c2,c3,c4;
		for (c1 = 'a'; c1 <= 'z'; c1++)
	    {
	        if (c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u') {
	        	for (c2 = 'a'; c2 <= 'z'; c2++)
	        	{
		            if (c1=='y' || c2=='a' || c2=='e' || c2=='i' || c2=='o' || c2=='u' || c2=='y' || c1==c2) {
		                		
		            }
		            else
		            {
		                System.out.println("" + c1 + c2);
		            }
	       		}
	        }
	        else
	        {
	        	for (c2 = 'a'; c2 <= 'z'; c2++)
	        	{
		            if (c1=='y' || c2!='a' || c2!='e' || c2!='i' || c2!='o' || c2!='u' || c2!='y' || c1==c2) {
		                		
		            }
		            else
		            {
		                System.out.println("" + c1 + c2);
		            }
	       		}
	        }
	        
	    }
	}
}

















/*for (c1 = 'a'; c1 <= 'z'; c1++)
	    {
	    	//System.out.print("" + c1);
	        for (c2 = 'a'; c2 <= 'z'; c2++)
	        {
	            //for (c3 = 'A'; c3 <= 'Z'; c3++)
	            {
	                //for (c4 = 'A'; c4 <= 'Z'; c4++)
	                {
	                	//System.out.println("" +c2);
	                	if (c1=='y' || c2=='a' || c2=='e' || c2=='i' || c2=='o' || c2=='u') {
	                		
	                	}
	                	else
	                	{
	                		System.out.println("" + c1 + c2);
	                	}
	                    //System.out.println("" + c1 + c2 + c3 + c4);
	                }
	            }
	        }
	        //System.out.println("");
	    }*/