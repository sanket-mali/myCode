import java.io.*;

public class charfreq{
    
    public int [] count(String str)
    {
        int [] arr=new int[26];
        String alphabet="abcdefghijklmnopqrstuvwxyz";
        String str1=str.toLowerCase();
        for(int i=0;i<str1.length();i++)
        {
            int index=alphabet.indexOf(str1.charAt(i));
            if(index>=0)
                arr[index]++;
        }
        
        for(int i=0;i<arr.length;i++)
        {
            System.out.println("-"+alphabet.charAt(i)+"- :"+arr[i]);
        }
        return arr;
    }
}
class main{
     public static void main(String[] args) {
         String s="",str;
         try{
                charfreq chfr=new charfreq();
               /* FileReader in=new FileReader("input.txt");
                BufferedReader br=new BufferedReader(in);
                while((str=br.readLine())!=null){
			        s+=str;
		        }*/
                CaesarCipher2KeyBreak cc=new CaesarCipher2KeyBreak();
               // System.out.println(s);
               s="Sei sw klv deec lrpcqrvbw sw fyi jytgvwj yej sivr jiyzxwyc";
                chfr.count(cc.halfOfString(s, 0));
                System.out.println("====================");
                chfr.count(cc.halfOfString(s, 1));
         }
         catch(Exception e)
         {

         }
}
}