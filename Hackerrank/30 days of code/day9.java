import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n;
        try{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        n=Integer.parseInt(br.readLine());
        int ans=factorial(n);
        System.out.println(ans);
    }
    catch(Exception e)
        {
        
    }
    }
    static int factorial(int n)
    {
        if(n==1)
            {
            return 1;
        }
        else
            {
            return n*factorial(n-1);
        }
    }
}
