import java.io.*;
import java.util.*;

public class Solution {

  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    String A=sc.nextLine();
    String B=sc.nextLine();
    /* Enter your code here. Print output to STDOUT. */
    System.out.println(A.length() + B.length());
    System.out.println(A.compareTo(B) <= 0 ? "No" : "Yes");
  	System.out.println(A.substring(0,1).toUpperCase() + A.substring(1).toLowerCase() + " " + B.substring(0,1).toUpperCase() + B.substring(1).toLowerCase());
  }
}
