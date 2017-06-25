import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution{
 public static void main(String[] args){
    
  String rex = "<(.+?)>([^<>]*?)</\\1>";
  Pattern p = Pattern.compile(rex);
  boolean none = true;
   
   
  Scanner in = new Scanner(System.in);
  int testCases = Integer.parseInt(in.nextLine());
  while(testCases>0){
     String line = in.nextLine();
     Matcher m = p.matcher(line);
     none = true;
     while(m.find()){
       if(m.group(2).length() > 0){
          System.out.println(m.group(2));
          none = false;
       }
     }
    if(none){
        System.out.println("None");
    }
    testCases--;
  }
 }
}
