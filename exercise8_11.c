/*
 * Exercise 8.11 Kochan - Programming in C
 *
 * Write a function called arraySum that takes two arguments: an integer array
 * and the number of elements in the array. Have the function return as its
 * result the sum of the elements in the array.
 */

#include <stdio.h>

// prototype
int arraySum (int arr[], int x);

// main
int main (void)
{
  int array[5] = { 4, 6, 2, 8, 1 };
  printf("The original array is: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("%2d", array[i]);
  }
  printf("\n");

  printf("The sum of the array elements is: %d.\n", arraySum (array, 5));

  return 0;
}

// function that return as its result the sum of the elements in the array
int arraySum (int arr[], int x)
{
  int result = 0;

  for (int i = 0; i < x; i++)
  {
    result += arr[i];
  }
  return result;
}
