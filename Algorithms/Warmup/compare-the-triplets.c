#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{

  int a0, a1, a2, b0, b1, b2, i, m = 0, n = 0;
  scanf("%d %d %d", &a0, &a1, &a2);
  scanf("%d %d %d", &b0, &b1, &b2);
  int a[3] = {a0, a1, a2};
  int b[3] = {b0, b1, b2};
  for (i = 0; i < 3; i++)
  {
    if (a[i] > b[i])
      m++;
    else if (a[i] < b[i])
      n++;
  }
  printf("%d %d", m, n);
  return 0;
}
