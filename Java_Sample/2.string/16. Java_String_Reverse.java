import java.io.*;
import java.util.*;

public class Solution {
  public static void main(String[] args) {
      
    Scanner sc=new Scanner(System.in);
    String A=sc.next();
    String B = new StringBuilder(A).reverse().toString();
    System.out.println(A.compareTo(B) == 0 ? "Yes" : "No");    
  }
}
