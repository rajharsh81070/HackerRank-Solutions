import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

  public static void main(String[] args) {
    /*
     * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
     * class should be named Solution.
     */
    Scanner in = new Scanner(System.in);
    BigInteger a = in.nextBigInteger();
    BigInteger b = in.nextBigInteger();
    in.close();
    BigInteger res1 = a.add(b);
    BigInteger res2 = a.multiply(b);
    System.out.println(res1);
    System.out.println(res2);
  }
}