#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int n;
  int d;
  scanf("%i %i", &n, &d);
  int *a = malloc(sizeof(int) * n);
  for (int a_i = 0; a_i < n; a_i++)
  {
    scanf("%i", &a[a_i]);
  }
  int b[n];
  for (int i = 0; i < n; i++)
  {
    b[(i + n - d) % n] = a[i];
  }
  for (int a_i = 0; a_i < n; a_i++)
  {
    printf("%d ", b[a_i]);
  }
  return 0;
}
