import edu.duke.*;

class FindGeneSimpleAndTest{
  public String findGeneSimple(String dna)
  {
    String result="";
    int startIndex=dna.indexOf("ATG");
    if(startIndex==-1)
    {
        return "There is no gene";
    }
    int stopIndex=dna.indexOf("TAA",startIndex+3);
    if(stopIndex==-1)
    {
        return "There is no gene";
    }
    if((stopIndex-startIndex)%3==0)
    {
      result=dna.substring(startIndex,stopIndex+3);
      return result;
    }
    else
    return "There is no gene";
  }
  public void test() {
    FindGeneSimpleAnd fg=new FindGeneSimpleAnd();
    String dna="AATGCGTAATATGGT";

    System.out.println(fg.findGeneSimple(dna));
    dna="AATGCTAGGGTAATATGGT";
    System.out.println(fg.findGeneSimple(dna));
    dna="ATCCTATGCTTCGGCTGCTCTAATATGGT";
    System.out.println(fg.findGeneSimple(dna));
    dna="AAATGCCCTAACTAGATTAAGAAACC";
    System.out.println(fg.findGeneSimple(dna));
  }
  public void getYoutubeLink()
  {
      URLResource ur =new URLResource("http://www.dukelearntoprogram.com/course2/data/manylinks.html");
      //String urlcontent=ur.asString();
      //String urlcontent="\"fdf//youtube.com";
      for(String s:ur.words())
      {
          String lows=s.toLowerCase();
          int index=lows.indexOf("youtube.com");
          if(index==-1)
          {
          }
          else
          {
              int qindex=lows.lastIndexOf("\"",index);
              int eindex=lows.indexOf("\"",index+11);
              //System.out.println(s.substring(qindex,index+11));
              System.out.println(">>>"+s+" >>>");
              System.out.println(">>>"+s.substring(qindex+1,eindex)+" >>>");
          }
      }
  }
}
