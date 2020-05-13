#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int arr[6][6], c;
  for (int arr_i = 0; arr_i < 6; arr_i++)
  {
    for (int arr_j = 0; arr_j < 6; arr_j++)
    {

      scanf("%d", &arr[arr_i][arr_j]);
    }
  }
  int sum, maxValue = -1000;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      sum = 0;
      for (int k = j; k <= j + 2; k++)
      {
        sum += arr[i][k] + arr[i + 2][k];
      }
      sum += arr[i + 1][j + 1];
      if (sum > maxValue)
        maxValue = sum;
    }
  }
  printf("%d", maxValue);
  return 0;
}
