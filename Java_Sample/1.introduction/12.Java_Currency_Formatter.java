import java.util.*;
import java.text.*;

public class Solution {
    
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    double payment = scanner.nextDouble();
    scanner.close();
    
    NumberFormat f;
    f = NumberFormat.getCurrencyInstance(Locale.US);
    System.out.println("US: " + f.format(payment));
    f = NumberFormat.getCurrencyInstance(new Locale("en", "in"));
    System.out.println("India: " + f.format(payment));
    f = NumberFormat.getCurrencyInstance(Locale.CHINA);
    System.out.println("China: " + f.format(payment));
    f = NumberFormat.getCurrencyInstance(Locale.FRANCE);
    System.out.println("France: " + f.format(payment));
}
}
