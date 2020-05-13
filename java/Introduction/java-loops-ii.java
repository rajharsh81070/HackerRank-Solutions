import java.util.*;
import java.io.*;

class Solution {
  public static void main(String[] argh) {
    Scanner in = new Scanner(System.in);
    int t = in.nextInt();
    for (int i = 0; i < t; i++) {
      int a = in.nextInt();
      int b = in.nextInt();
      int n = in.nextInt();
      int Ans = a;
      int powOf2 = 1;
      for (int j = 0; j < n; j++) {
        Ans = Ans + powOf2 * b;
        powOf2 *= 2;
        System.out.print(Ans + " ");
      }
      System.out.println();
    }
    in.close();
  }
}
