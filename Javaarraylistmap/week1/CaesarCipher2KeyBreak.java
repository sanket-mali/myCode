public class CaesarCipher2KeyBreak{
    String halfOfString(String s,int pos)
    {
        String half="";
        for(int i=pos;i<s.length();i+=2)
        {
            half+=s.charAt(i);
        }
        return half;
    }
    int getKey(String s)
    {
        int max=0;
        int index=0;
        int [] count=new int[26];
        charfreq cf=new charfreq();
        count=cf.count(s);
        for(int i=0;i<count.length;i++)
        {
            if(count[i]>max)
            {
                max=count[i];
                index=i;
            }
        }
        System.out.println("index:"+index+"max:"+max);
        int key=4-index;
        if(key>0)
        return key;
        else
        return 26+key;
        //return max;
    }
}
class Main{
    public static void main(String[] args) {
        CaesarCipher2KeyBreak cc=new CaesarCipher2KeyBreak();
        String sl="First Legion";
        System.out.println(sl);
        System.out.println(cc.halfOfString(sl, 0));
        System.out.println(cc.halfOfString(sl,1));
        System.out.println(cc.getKey(cc.halfOfString(sl, 0)));
        System.out.println(cc.getKey(cc.halfOfString(sl, 1)));
    }
}