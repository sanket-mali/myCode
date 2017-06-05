//video Translating to Code in Lesson Finding All Genes in DNA

/**
 * Write a description of AllGenes here.
 * 
 * @author Drew 
 * @version Aug 30, 2016
 */
import java.util.*;



import java.io.*;
public class FindAllGene {
    static int count=0,count2=0;
    public static int findStopCodon(String dnaStr,
                             int startIndex, 
                             String stopCodon){                                 
            int currIndex = dnaStr.indexOf(stopCodon,startIndex+3);
            while (currIndex != -1 ) {
               int diff = currIndex - startIndex;
               if (diff % 3  == 0) {
                   return currIndex;
               }
               else {
                   currIndex = dnaStr.indexOf(stopCodon, currIndex + 1);
               }
            }
            return -1;
        
    }
    public static String findGene(String dna, int where) {
        int startIndex = dna.indexOf("ATG", where);
        if (startIndex == -1) {
            return "";
        }
        int taaIndex = findStopCodon(dna,startIndex,"TAA");
        int tagIndex = findStopCodon(dna,startIndex,"TAG");
        int tgaIndex = findStopCodon(dna,startIndex,"TGA");
        int minIndex = 0;
        if (taaIndex == -1 ||
            (tgaIndex != -1 && tgaIndex < taaIndex)) {
            minIndex = tgaIndex;
        }
        else {
            minIndex = taaIndex;
        }
        if (minIndex == -1 ||
            (tagIndex != -1 && tagIndex < minIndex)) {
            minIndex = tagIndex;
        }
        if (minIndex == -1){
            return "";
        }
        return dna.substring(startIndex,minIndex + 3);
    }
    public static void printAllGenes(String dna) {
      //Set startIndex to 0
      //int count=0;
      int startIndex = 0;
      //Repeat the following steps
      while ( true ) {
          //Find the next gene after startIndex
          String currentGene = findGene(dna, startIndex);
          //If no gene was found, leave this loop 
          if (currentGene.isEmpty()) {
              break;
          }
          //Print that gene out
          count=count+1;
          System.out.print(count+"==");
          
          System.out.print(currentGene+" == ");
          if(countCG(currentGene)>0.35)
          {
              count2=count2+1;
            System.out.println(count2+">>"+countCG(currentGene));
          }
          //Set startIndex to just past the end of the gene
          startIndex = dna.indexOf(currentGene, startIndex) +
                       currentGene.length();
        }
    }
    public static float countCG(String dna)
    {
        int count1=0;
        for(int i=0;i<dna.length();i++)
        {
            if(dna.charAt(i)=='C' || dna.charAt(i)=='G')
            count1=count1+1;
        }
        return (float)count1/dna.length();
    }
    public static void testOn(String dna) {
        //System.out.println("Testing printAllGenes on " + dna);
        printAllGenes(dna);
    }
    public static void main(String args[]) {
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
        testOn(dna);
    }
}
