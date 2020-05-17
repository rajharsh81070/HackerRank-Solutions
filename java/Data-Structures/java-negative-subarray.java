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
    String[] input = in.nextLine().split(" ");
    int[] arr = new int[n];
    for (int i = 0; i < n; i++)
      arr[i] = Integer.parseInt(input[i]);
    int Ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        int sum = 0;
        for (int k = i; k <= j; k++)
          sum += arr[k];
        if (sum < 0)
          Ans++;
      }
    }
    System.out.println(Ans);
  }
}
