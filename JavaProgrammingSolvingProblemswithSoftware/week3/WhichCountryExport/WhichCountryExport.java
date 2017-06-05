
/**
 * Write a description of WhichCountryExport here.
 * 
 * @author (Sanket) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import org.apache.commons.csv.*;

public class WhichCountryExport {
    public void listExporter(CSVParser parser)
    {
        int c=0;
        String tril="$999,999,999,999";
        for(CSVRecord record:parser)
        {
            String export=record.get("Exports");
            String country=record.get("Country");
            String val=record.get("Value (dollars)");
            if(val.length()>tril.length())
            {
                System.out.println(country);
                //break;
                //c++;
            }
        }
        System.out.println(c);
    }
    public void test()
    {
        FileResource fr=new FileResource();
        CSVParser cs=fr.getCSVParser();
        listExporter(cs);
    }
}
