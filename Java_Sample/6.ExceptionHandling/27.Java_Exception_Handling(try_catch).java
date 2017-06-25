import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

public static void main(String[] args) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    Scanner scanner = new Scanner(System.in);
    try{
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.print(a/b);
    }
    catch (InputMismatchException e){
        System.out.println("java.util.InputMismatchException");
    }
    catch(Exception e){
        System.out.println(e.toString());
    }
}
}