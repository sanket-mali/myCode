import edu.duke.*;
/**
 * Write a description of HelloWorld here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class HelloWorld {
    public void hello()
    {
        FileResource fr=new FileResource("hello_unicode.txt");
        for(String line:fr.lines())
        {
            System.out.println(line);
        }
    }

}
