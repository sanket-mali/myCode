import java.util.Scanner;

class CaesarCipher2 {
    public String encrypt(String input, int keyone, int keysecond) {
        //Make a StringBuilder with message (encrypted)
        StringBuilder encrypted = new StringBuilder(input);
        //Write down the alphabet
      String alphabet1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String alphabet2="abcdefghijklmnopqrstuvwxyz";
        //Compute the shifted alphabet
        String shiftedAlphabetone1 = alphabet1.substring(keyone)+
        alphabet1.substring(0,keyone);
	String shiftedAlphabetone2 = alphabet2.substring(keyone)+
        alphabet2.substring(0,keyone);
	String shiftedAlphabetsecond1 = alphabet1.substring(keysecond)+
        alphabet1.substring(0,keysecond);
	String shiftedAlphabetsecond2 = alphabet2.substring(keysecond)+
        alphabet2.substring(0,keysecond);
	
        //Count from 0 to < length of encrypted, (call it i)
        for(int i = 0; i < encrypted.length(); i++) {
           if(alphabet1.indexOf(encrypted.charAt(i))==-1 && alphabet2.indexOf(encrypted.charAt(i))==-1)
	   {
		
	   }
	   else
	   {
		if(i%2==0)
		{
			
		   if(Character.isLowerCase(encrypted.charAt(i)))
		   {
		encrypted.setCharAt(i,shiftedAlphabetone2.charAt(alphabet2.indexOf(encrypted.charAt(i))));
			}
			else
			{
			encrypted.setCharAt(i,shiftedAlphabetone1.charAt(alphabet1.indexOf(encrypted.charAt(i))));
			}
		}
		else
		{
			if(Character.isLowerCase(encrypted.charAt(i)))
			{
			encrypted.setCharAt(i,shiftedAlphabetsecond2.charAt(alphabet2.indexOf(encrypted.charAt(i))));
			}
			else
			{
			encrypted.setCharAt(i,shiftedAlphabetsecond1.charAt(alphabet1.indexOf(encrypted.charAt(i))));
			}
		}
	   }
        }
        return encrypted.toString();
}
}
public class CaesarCipher2Key{
	public static void main(String args[])
	{
	CaesarCipher2 c= new CaesarCipher2();Scanner sc=new Scanner(System.in);
	String s=sc.nextLine();
	int n1=sc.nextInt();
	int n2=sc.nextInt();
	/*for(int i=1;i<26;i++)
	{
		for(int j=1;j<26;j++)
		{
			String a=c.encrypt(s,i,j);
			System.out.println(a);
			//System.out.println("key1:"+i+"key2:"+j);
		}
	}*/
	String a=c.encrypt(s,n1,n2);
	System.out.println(s);
	System.out.println(a);
}
}
 





