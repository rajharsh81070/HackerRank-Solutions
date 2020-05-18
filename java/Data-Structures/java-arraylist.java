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
    int n = in.nextInt();
    in.nextLine();
    ArrayList<ArrayList<Integer>> A = new ArrayList<ArrayList<Integer>>(n);
    for (int i = 0; i < n; i++) {
      String[] input = in.nextLine().split(" ");
      in.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
      int m = Integer.parseInt(input[0]);
      ArrayList<Integer> tmp = new ArrayList<Integer>(m);
      for (int j = 0; j < m; j++)
        tmp.add(Integer.parseInt(input[j + 1]));
      A.add(tmp);
    }
    int q = in.nextInt();
    in.nextLine();
    for (int i = 0; i < q; i++) {
      String[] val = in.nextLine().split(" ");
      int x = Integer.parseInt(val[0]) - 1, y = Integer.parseInt(val[1]) - 1;
      try {
        System.out.println(A.get(x).get(y));
      } catch (Exception e) {
        System.out.println("ERROR!");
      }
    }
  }
}
