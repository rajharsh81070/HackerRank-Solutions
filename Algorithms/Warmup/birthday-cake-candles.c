#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int *ar)
{
  int m = 0, temp = 0;
  for (ar_size = 0; ar_size < n - 1; ar_size++)
  {
    if (ar[ar_size] > ar[ar_size + 1])
    {
      temp = ar[ar_size + 1];
      ar[ar_size + 1] = ar[ar_size];
      ar[ar_size] = temp;
    }
  }
  for (ar_size = 0; ar_size < n; ar_size++)
  {
    if (ar[ar_size] == ar[n - 1])
    {
      m++;
    }
  }
  return m;
}

int main()
{
  int n;
  scanf("%i", &n);
  int *ar = malloc(sizeof(int) * n);
  for (int ar_i = 0; ar_i < n; ar_i++)
  {
    scanf("%i", &ar[ar_i]);
  }
  int result = birthdayCakeCandles(n, n, ar);
  printf("%d\n", result);
  return 0;
}
