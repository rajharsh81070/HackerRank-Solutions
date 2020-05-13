#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int simpleArraySum(int n, int ar_size, int *ar)
{
  int sum = 0;
  for (ar_size = 0; ar_size < n; ar_size++)
  {
    sum += ar[ar_size];
  }
  return sum;
}

int main()
{
  int n;
  scanf(" %i", &n);
  int *ar = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &ar[i]);
  }
  int result = simpleArraySum(n, n, ar);
  printf("%d\n", result);
  return 0;
}
