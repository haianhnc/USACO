import java.io.*;
import java.util.*;

public class Solution {

static boolean isAnagram(String a, String b) {
    // Complete the function
  char[] A = a.toLowerCase().toCharArray();
  char[] B = b.toLowerCase().toCharArray();
  Arrays.sort(A);
  Arrays.sort(B);
  boolean re = Arrays.equals(A, B);
  return re;
}

public static void main(String[] args) {

  Scanner scan = new Scanner(System.in);
  String a = scan.next();
  String b = scan.next();
  scan.close();
  boolean ret = isAnagram(a, b);
  System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
}
}