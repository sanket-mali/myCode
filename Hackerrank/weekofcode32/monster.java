import java.math.*;
import java.util.*;
class main{
    static int min(int a[],int b)
    {
        int i,min=a[0],pos=0;
        for(i=0;i<b;i++)
        {
            if(a[i]>0)
            {
                min=a[i];
                pos=i;
                break;
            }
        }
        for(i=0;i<b;i++)
        {
            if(a[i]>0 && a[i]<min)
            {
                min=a[i];
                pos=i;
            }
        }
        return pos;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int k,count=0;
        String n1=sc.next();
        String hit1=sc.next();
        String t1=sc.next();
        int n=Integer.parseInt(n1);
        int hit=Integer.parseInt(hit1);
        int t=Integer.parseInt(t1);
        int[] array=new int[100000];
        for(int i=0;i<n;i++)
        {
            array[i]=Integer.parseInt(sc.next());
        }
        for(int j=0;j<t;j++)
        {

            k=min(array,n);
            System.out.println("k: "+k);
            /*while(array[k]<=0)
            {
                k++;
            }*/
            array[k]=array[k]-hit;
            if(array[k]<=0)
            {
                count++;
            }
        }
        
        /*System.out.println(n);
        System.out.println(hit);*/
        System.out.println(count);
    }
}