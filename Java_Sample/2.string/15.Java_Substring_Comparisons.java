import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Arrays;

public class Solution {
  public static String getSmallestAndLargest(String s, int k) {

  String A[] = new String[s.length()- k +1];
    for(int i=0;i <= s.length() -k; i++){
     A[i] = s.substring(i, i+k);
     //System.out.println(A[i]);
  }
    Arrays.sort(A); 
    String smallest = A[0];
    String largest = A[A.length - 1];
    return smallest + "\n" + largest;
  }

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    String s = scan.next();
    int k = scan.nextInt();
    scan.close();
  
    System.out.println(getSmallestAndLargest(s, k));
  }
}
