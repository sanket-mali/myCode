
/**
 * Write a description of GrayScaleConverter here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import java.io.File;

public class GrayScaleConverter {
    public ImageResource converter(ImageResource inImage)
    {
        ImageResource outImage =new ImageResource(inImage.getWidth(),inImage.getHeight());
        for(Pixel pix:outImage.pixels())
        {
            Pixel inPixel=inImage.getPixel(pix.getX(),pix.getY());
            int avg=(inPixel.getRed()+inPixel.getGreen()+inPixel.getBlue())/3;
            pix.setRed(avg);
            pix.setGreen(avg);
            pix.setBlue(avg);
        }
        return outImage;
    }
    public void selectNConvert()
    {
        DirectoryResource dr=new DirectoryResource();
        for(File f:dr.selectedFiles())
        {
            ImageResource ir =new ImageResource(f);
            ImageResource gray =converter(ir);
            gray.setFileName(ir.getFileName());
            doSave(gray);
            gray.draw();
        }
    }
    public void doSave(ImageResource newImage)
    {
        String name=newImage.getFileName();
        String newName="gray_"+name;
        newImage.setFileName(newName);
        newImage.save();
    }
}
