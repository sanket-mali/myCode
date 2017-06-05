
/**
 * Write a description of NegativeConverter here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import java.io.File;

public class NegativeConverter {
    public ImageResource convert(ImageResource inImage)
    {
        ImageResource outImage=new ImageResource(inImage.getWidth(),inImage.getHeight());
        for(Pixel pix:outImage.pixels())
        {
            Pixel inPixel=inImage.getPixel(pix.getX(),pix.getY());
            pix.setRed(255-inPixel.getRed());
            pix.setGreen(255-inPixel.getGreen());
            pix.setBlue(255-inPixel.getBlue());
        }
        return outImage;
    }
    public void selectNConvert()
    {
        DirectoryResource dr =new DirectoryResource();
        for(File f:dr.selectedFiles())
        {
            ImageResource img=new ImageResource(f);
            ImageResource invert=convert(img);
            String name=img.getFileName();
            invert.setFileName("invert_"+name);
            invert.draw();
            invert.save();
        }
    }
}
