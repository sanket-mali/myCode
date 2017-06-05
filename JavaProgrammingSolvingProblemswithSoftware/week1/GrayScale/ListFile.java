
/**
 * Write a description of ListFile here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import java.io.File;

public class ListFile {
    public void showFiles()
    {
        DirectoryResource dr =new DirectoryResource();
        for(File name:dr.selectedFiles())
        {
            System.out.println(name);
        }
    }
}
