
/**
 * Write a description of FindGene here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

import java.io.*;
import java.util.*;

public class GeneSelection {
    public static int findGene(String dna)
    {
        int startIndex,currentIndex,taaIndex,tgaIndex,tagIndex,minIndex,count=0,maxLength=0,countRatio=0;
        startIndex=dna.indexOf("ATG");
        //System.out.println("start1: "+startIndex);
        //int count1=0;
        //count=0;
        System.out.println(count);
        while(true)
        {
                if(startIndex==-1)
                    break;
                taaIndex=findStopCodon(dna,startIndex,"TAA");
                tgaIndex=findStopCodon(dna,startIndex,"TGA");
                tagIndex=findStopCodon(dna,startIndex,"TAG");
                minIndex=findMin(taaIndex,tagIndex,tgaIndex);
                String gene=dna.substring(startIndex,minIndex+3);
                
                //total gene count
                count=count+1;
                //System.out.println(count);
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
                float ratio=cgRatio(gene);
                float check=(float)0.35;
                
                if(ratio>check)
                {
                    countRatio++;
                    System.out.println(count+"=="+gene+"=="+ratio+"=="+countRatio+"large");
                }
                else
                {
                    System.out.println(count+"=="+gene+"=="+ratio);
                }
                //System.out.println("start: "+startIndex);
                startIndex=dna.indexOf("ATG",minIndex+3);        
        }
        //return count;
        //return maxLength;
        return countRatio;
    }
    public static float cgRatio(String gene)
    {
        int count=0;
        for(int i=0;i<gene.length();i++)
        {
            if(gene.charAt(i)=='C' || gene.charAt(i)=='G')
            count++;
        }
        return (float)count/gene.length();
    }
    public static int findMin(int taaIndex,int tagIndex,int tgaIndex)
    {
        int minIndex;
        if(taaIndex==-1 || (tgaIndex!=-1 && tgaIndex<taaIndex))
        minIndex=tgaIndex;
        else
        minIndex=taaIndex;
        if(minIndex==-1 || (tagIndex!=-1 && tagIndex<minIndex))
        minIndex=tagIndex;
        
        return minIndex;
    }
    public static int findStopCodon(String dna,int startIndex,String codon )
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
    public static void main(String args[])
    {
        String dna="",str="";
        try
        {
            FileReader in=new FileReader("input.txt");
            BufferedReader br=new BufferedReader(in);
            while((str=br.readLine())!=null){
                dna+=str;
            }
        }
        catch(Exception e)
        {

        }
        //String answer=findGene(dna);
        //int answer=countCTG(dna);
        int answer=findGene(dna);
        System.out.println(answer);
    }
}
