
/**
 * Write a description of ParseWeatherData here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import org.apache.commons.csv.*;
import java.io.File;

public class ParseWeatherData {
    public void parseData(CSVParser parser)
    {
        float mintemp=9999;
        String mintime="";
        //float sum=0;
        //int c=0;
        for(CSVRecord record:parser)
        {
            //String humidity=record.get("Humidity");
            //int humid=Integer.parseInt(humidity);
            String time=record.get("DateUTC");
            float temp=Float.parseFloat(record.get("TemperatureF"));
            if(temp<mintemp)
            {
                mintemp=temp;
                mintime=time;
               //sum+=temp;
               //c=c+1;
            }
            
        
        }
        //float avg=sum/c;
        System.out.println(mintime+" == "+mintemp);
        //return mintime;
    }
    public void test()
    {
        //int check=9999;
        //int c=0;
        DirectoryResource dr=new DirectoryResource();
        for(File f:dr.selectedFiles())
        {
            //c++;
            
            FileResource fr=new FileResource(f);
            CSVParser cs=fr.getCSVParser();
            //int ch=parseData(cs);
            //System.out.print(c+" ");
            //FileResource fr=new FileResource();
            //CSVParser cs=fr.getCSVParser();
            parseData(cs);
           // if(ch<check)
            //{
              //  check=ch;
            //}
            
           // System.out.println(ch);
            
        }
        //System.out.println("answer: "+check);
        
    }
}
