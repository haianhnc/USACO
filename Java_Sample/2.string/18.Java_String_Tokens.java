import java.io.*;
import java.util.*;

public class Solution {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    try{
      String s = scan.nextLine();
      String ss[] = s.trim().split("[\\s !,?._'@]+");
      //System.out.println(ss);
      if(ss.length == 0){
        System.out.print(0);
      }
      else{
        System.out.println(ss.length);
        for(String a : ss){
          System.out.println(a);
        }
      }
      scan.close();
      }
    catch(Exception e){
      System.out.print(0);
    }
  }
}
