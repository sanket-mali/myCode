
/**
 * Write a description of FindGene here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import edu.duke.*;
import java.io.File;

public class FindGene {
    public int findGene(String dna)
    {
        int startIndex,currentIndex,taaIndex,tgaIndex,tagIndex,minIndex,count,maxLength=0,countRatio=0;
        startIndex=dna.indexOf("ATG");
        //System.out.println("start1: "+startIndex);
        //int count1=0;
        count=0;
        System.out.println(count);
        while(true)
        {
                taaIndex=findStopCodon(dna,startIndex,"TAA");
                tgaIndex=findStopCodon(dna,startIndex,"TGA");
                tagIndex=findStopCodon(dna,startIndex,"TAG");
                minIndex=findMin(taaIndex,tagIndex,tgaIndex);
                String gene=dna.substring(startIndex,minIndex+3);
                
                //total gene count
                count=count+1;
               // System.out.println(count);
                //gene count length>60
                /*if(gene.length()>60)
                {
                    count++;
                    System.out.println(count+"=="+gene);
                }*/
                //System.out.println(count+"=="+gene);
                
                //largest gene
                /*int length=gene.length();
                if(length>maxLength)
                maxLength=length;*/
                //System.out.println(gene);
                //cgratio
               /* float ratio=cgRatio(gene);
                float check=(float)0.35;
                //System.out.println(count+"=="+ratio);
                if(ratio>check)
                {
                    countRatio++;
                    System.out.println(countRatio+"=="+gene+"=="+ratio);
                }*/
                //System.out.println("start: "+startIndex);
                startIndex=dna.indexOf("ATG",minIndex+3);
                if(startIndex==-1)
                break;
//                
        }
        return count;
        //return maxLength;
        //return countRatio;
    }
    /*public float cgRatio(String gene)
    {
        int count=0;
        for(int i=0;i<gene.length();i++)
        {
            if(gene.charAt(i)=='C' || gene.charAt(i)=='G')
            count++;
        }
        return (float)count/gene.length();
    }*/
    /*public int countCTG(String dna)
    {
        int index,count=0;
        index=dna.indexOf("CTG");
        while(index!=-1)
        {
            count++;
            index=dna.indexOf("CTG",index+3);
        }
        return count;
    }*/
    public int findMin(int taaIndex,int tagIndex,int tgaIndex)
    {
        int minIndex;
        if(taaIndex==-1 || (tagIndex!=-1 && tagIndex<taaIndex))
        minIndex=tagIndex;
        else
        minIndex=taaIndex;
        if(minIndex==-1 || (tgaIndex!=-1 && tgaIndex<minIndex))
        minIndex=tgaIndex;
        
        return minIndex;
    }
    public int findStopCodon(String dna,int startIndex,String codon )
    {
        int currentIndex=dna.indexOf(codon,startIndex+3);
        while(currentIndex!=-1)
        {
            if((currentIndex-startIndex)%3!=0)
            {
                currentIndex=dna.indexOf(codon,currentIndex+1);
            }
            else
            return currentIndex;
        }
        return -1;
    }
    public void test()
    {
        FileResource fr=new FileResource("input.txt");
        String dna=fr.asString();
        //String answer=findGene(dna);
        //int answer=countCTG(dna);
        int answer=findGene(dna);
        System.out.println(answer);
    }
}
