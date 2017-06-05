import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
 class CandidateCode {
    /*
     * Complete the function below.
    */
  static ArrayList<String> ar= new ArrayList<String>();
 public static int appearanceCount(int input1,int input2,String input3,String input4)
    {
	    //Write code here
       CandidateCode cc=new CandidateCode();
       cc.permute(input3, 0, input1-1);
       int counttotal=0;
       for(int i=0;i<ar.size();i++)
       {
           counttotal=counttotal+countapp(input4,ar.get(i));
       }
       return counttotal;
    }
private static int countapp(String a,String b)
{
    int lastIndex = 0;
    int count = 0;

    while(lastIndex != -1){
    lastIndex = a.indexOf(b,lastIndex);
    if(lastIndex != -1){
        count ++;
        lastIndex += b.length();
    }
}
return count;
}
     private void permute(String str, int l, int r)
    {
        if (l == r)
            //System.out.println(str);
            ar.add(str);
        else
        {
            for (int i = l; i <= r; i++)
            {
                str = swap(str,l,i);
                permute(str, l+1, r);
                str = swap(str,l,i);
            }
        }
    }
 
    public String swap(String a, int i, int j)
    {
        char temp;
        char[] charArray = a.toCharArray();
        temp = charArray[i] ;
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return String.valueOf(charArray);
    }
 public static void main(String[] args) throws IOException{
        Scanner in = new Scanner(System.in);
        int output = 0;
        int ip1 = Integer.parseInt(in.nextLine().trim());
        int ip2 = Integer.parseInt(in.nextLine().trim());
        String ip3 = in.nextLine().trim();
        String ip4 = in.nextLine().trim();
        output = appearanceCount(ip1,ip2,ip3,ip4);
        System.out.println(String.valueOf(output));
       /* String s=in.nextLine();
        CandidateCode c=new CandidateCode();
        c.permute(s, 0, s.length()-1);*/
    }
}
