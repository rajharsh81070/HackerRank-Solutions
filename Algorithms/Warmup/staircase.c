#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int n, i, j, k;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (k = n; k > i; k--)
    {
      printf(" ");
    }
    for (j = 1; j <= i; j++)
    {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
