import java.io.*;
import java.util.Scanner;
import java.math.BigInteger;
class Enormous{
	public static void main(String[] args) {
		Scanner cn=new Scanner(System.in);
		int m,i,count=0;
		m=Integer.parseInt(cn.next());
		//System.out.println(m);
		String n=cn.next();
		BigInteger bgn=new BigInteger(n);
		BigInteger bgz=new BigInteger("0");
		for (i=0;i<m ;i++ ) {
			
		String s=cn.next();
		BigInteger bg=new BigInteger(s);
		BigInteger bgm=bg.mod(bgn);
		int res=bgm.compareTo(bgz);
		if (res==0) {
				//System.out.println(bg.toString());	
			count++;
			}	

		}
		System.out.println(count);
	}
}