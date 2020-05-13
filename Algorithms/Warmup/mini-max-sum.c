#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  long int j, sum = 0, temp = 0;
  long int *b = malloc(sizeof(int) * 5);
  int *arr = malloc(sizeof(int) * 5);
  for (int arr_i = 0; arr_i < 5; arr_i++)
  {
    scanf("%d", &arr[arr_i]);
  }
  for (int arr_i = 0; arr_i < 5; arr_i++)
  {
    sum = sum + arr[arr_i];
  }
  for (int arr_i = 0; arr_i < 5; arr_i++)
  {
    b[arr_i] = sum - arr[arr_i];
  }
  for (int arr_i = 1; arr_i < 5; arr_i++)
  {
    for (j = 0; j < 5 - arr_i; j++)
    {
      if (b[j] > b[j + 1])
      {
        temp = b[j + 1];
        b[j + 1] = b[j];
        b[j] = temp;
      }
    }
  }
  printf("%ld %ld", b[0], b[4]);
  return 0;
}
