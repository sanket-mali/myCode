import java.util.Scanner;
import java.io.*;

class CaesarCipher2 {
    public String encrypt(String input, int keyone) {
        //Make a StringBuilder with message (encrypted)
        StringBuilder encrypted = new StringBuilder(input);
        //Write down the UPPER CASE alphabet
      	String alphabet1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//Write down the lower case alphabet
        String alphabet2="abcdefghijklmnopqrstuvwxyz";
        //Compute the shifted alphabet for UPPER CASE
        String shiftedAlphabetone1 = alphabet1.substring(keyone)+
        alphabet1.substring(0,keyone);
	//Compute the shifted alphabet for lower case
	String shiftedAlphabetone2 = alphabet2.substring(keyone)+
        alphabet2.substring(0,keyone);
	
        //Count from 0 to < length of encrypted, (call it i)
        for(int i = 0; i < encrypted.length(); i++) {
           if(alphabet1.indexOf(encrypted.charAt(i))==-1 && alphabet2.indexOf(encrypted.charAt(i))==-1)
	   {
		//case: when message character does not belongs to the alphabet
	   }
	   else
	   {
		//message character is in lower case and matched with a character in lower case cahracter
		if(Character.isLowerCase(encrypted.charAt(i)))
		{
			//Set encrypt charecter in the place of actual message character
			encrypted.setCharAt(i,shiftedAlphabetone2.charAt(alphabet2.indexOf(encrypted.charAt(i))));
		}
		else
		{
			encrypted.setCharAt(i,shiftedAlphabetone1.charAt(alphabet1.indexOf(encrypted.charAt(i))));
		}
	   }
        }
        return encrypted.toString();
}
}
public class CaesarCipher{
	public static void main(String args[])
	{
	String s="",str;
	try{
		//FileReader in=new FileReader("input.txt");
		Scanner sc=new Scanner(System.in);
		CaesarCipher2 c= new CaesarCipher2();
		/*BufferedReader br=new BufferedReader(in);
		while((str=br.readLine())!=null){
			s+=str;
		}*/
		s="i w uov qmEBWBbmqbzm V wxbz vgc wsb";
		int n=sc.nextInt();
		String a=c.encrypt(s,n);
		System.out.println(s);
		System.out.println(a);
	}
	catch(Exception e)
	{
	}
}
}
 





