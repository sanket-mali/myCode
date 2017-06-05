import edu.duke.*;
/**
 * Write a description of HelloUrl here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class HelloUrl {
    public void url()
    {
        URLResource ur=new URLResource("https://google.com");
        for(String s:ur.lines())
        {
            System.out.println(s);
        }
    }
}
