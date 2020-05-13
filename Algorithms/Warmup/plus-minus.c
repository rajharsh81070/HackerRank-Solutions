#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int n, a1 = 0, b1 = 0, c1 = 0;
  float a, b, c;
  scanf("%d", &n);
  int arr[n];
  for (int arr_i = 0; arr_i < n; arr_i++)
  {
    scanf("%d", &arr[arr_i]);
  }
  for (int arr_i = 0; arr_i < n; arr_i++)
  {
    if (arr[arr_i] > 0)
    {
      a1++;
    }
    else if (arr[arr_i] == 0)
    {
      b1++;
    }
    else if (arr[arr_i] < 0)
    {
      c1++;
    }
  }
  a = (float)a1 / n;
  b = (float)b1 / n;
  c = (float)c1 / n;
  printf("%f\n%f\n%f\n", a, c, b);
  return 0;
}
