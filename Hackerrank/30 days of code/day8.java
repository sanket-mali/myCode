//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map myMap; // declare a String to String map
        myMap = new HashMap<String,String>(); // initialize it as a new String to String HashMap
        myMap = new LinkedHashMap<String,String>();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            myMap.put(name, phone);
            // Write code here
        }
        while(in.hasNext()){
            String s = in.next();
            if(myMap.get(s)==null)
                System.out.println("Not found");
            else
                System.out.println(s+"="+myMap.get(s));
            // Write code here
        }
        in.close();
    }
}

