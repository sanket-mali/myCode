import java.io.*;
import java.util.Scanner;
class Min{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n,i;
		n=Integer.parseInt(sc.next());
		String s1,s2,s3;
		s1="min(int, ";
		s2=")";
		s3="int";
		if (n==2) {
			System.out.print(s1+s3+s2);
		}
		else
		{
			for (i=1;i<n-1 ;i++ ) {
				System.out.print(s1);
			}
			System.out.print(s1+s3+s2);
			for (i=1;i<n-1 ;i++ ) {
				System.out.print(s2);
			}
		}
		System.out.println("");
	}
}