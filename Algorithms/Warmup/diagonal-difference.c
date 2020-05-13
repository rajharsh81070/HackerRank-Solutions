#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int n, sum, sum1 = 0, sum2 = 0;
  scanf("%d", &n);
  int a[n][n];
  for (int a_i = 0; a_i < n; a_i++)
  {
    for (int a_j = 0; a_j < n; a_j++)
    {

      scanf("%d", &a[a_i][a_j]);
    }
  }
  for (int a_i = 0; a_i < n; a_i++)
  {
    for (int a_j = 0; a_j < n; a_j++)
    {

      if (a_i == a_j)
      {
        sum1 += a[a_i][a_j];
      }
    }
  }
  int a_j = n - 1;
  for (int a_i = 0; a_i < n; a_i++)
  {
    sum2 += a[a_i][a_j];

    a_j--;
  }
  sum = sum1 - sum2;

  printf("%d", abs(sum));
  return 0;
}
