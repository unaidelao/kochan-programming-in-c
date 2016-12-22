/*
 * Exercise 8.12A Kochan - Programming in C
 *
 * A matrix M with i rows, j columns can be transposed into a matrix N having j
 * rows and i columns by simply setting the value of N a,b equal to the value
 * of M b,a for all relevant values of a and b.
 *
 * To do: Write a function transposeMatrix that takes as an argument a 4 x 5
 * matrix and a 5 x 4 matrix. Have the function transpose the 4 x 5 matrix and
 * store the results in the 5 x 4 matrix. Also write a main routine to test the
 * function.
 */

#include <stdio.h>

// prototype
void transposeMatrix (int firstMatrix[4][5], int secondMatrix[5][4]);
void print_firstMatrix (int array[4][5]);
void print_secondMatrix (int array[5][4]);

// main
int main (void)
{
  int firstMatrix[4][5] = {
          {  1,  2,  3,  4,  5 },
          {  6,  7,  8,  9, 10 },
          { 11, 12, 13, 14, 15 },
          { 16, 17, 18, 19, 20 }
  };
  printf ("\nThis is the First Matrix: \n");
  print_firstMatrix (firstMatrix);

  int secondMatrix[5][4] = { 0 };
  printf ("\nThis is the Second Matrix, as you see, empty: \n");
  print_secondMatrix (secondMatrix);

  printf("\nAnd now, we transpose the first into the second: \n");
  transposeMatrix (firstMatrix, secondMatrix);

  printf ("Again, the First Matrix: \n");
  print_firstMatrix (firstMatrix);

  printf ("\nThe new Second Matrix: \n");
  print_secondMatrix (secondMatrix);

  return 0;
}

// transpose matrix function
void transposeMatrix (int firstMatrix[4][5], int secondMatrix[5][4])
{
  int row, column;
  for (row = 0; row < 4; row++)
    for (column = 0; column < 5; column++)
      secondMatrix[column][row] = firstMatrix[row][column];
}

// print first matrix funtion
void print_firstMatrix (int array[4][5])
{
  int row, column;
  for (row = 0; row < 4; row++) {
    for (column = 0; column < 5; column++)
      printf ("%3d", array[row][column]);
    printf ("\n");
  }
}

// print second matrix funtion
void print_secondMatrix (int array[5][4])
{
  int row, column;
  for (row = 0; row < 5; row++) {
    for (column = 0; column < 4; column++)
      printf ("%3d", array[row][column]);
    printf ("\n");
  }
}
