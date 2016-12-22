/*
 * Exercise 8.12B Kochan - Programming in C
 *
 * A matrix M with i rows, j columns can be transposed into a matrix N having j
 * rows and i columns by simply setting the value of N a,b equal to the value
 * of M b,a for all relevant values of a and b.
 *
 * To do: Using variable-length arrays, rewrite the transposeMatrix function
 * developed in exercise 12A to take the number of rows and columns as
 * arguments, and to transpose the matrix of the specified dimensions.
 */

/* WARNING: this program shows
 * *** stack smashing detected ***: ./a.out terminated
 * when executed.
 *
 * I don't know if there is a bug, or if my compiler is not fully compatible
 * with variable-length arrays.
 */
#include <stdio.h>

// prototypes
void transposeMatrix (int nRows, int nCols,
                int firstMatrix[nRows][nCols], int secondMatrix[nRows][nCols]);
void print_firstMatrix (int nRows, int nCols, int array[nCols][nRows]);
void print_secondMatrix (int nRows, int nCols, int array[nCols][nRows]);

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
  print_firstMatrix (4, 5, firstMatrix);

  int secondMatrix[5][4] = { 0 };
  printf ("\nThis is the Second Matrix, as you see, empty: \n");
  print_secondMatrix (5, 4, secondMatrix);

  printf("\nAnd now, we transpose the first into the second: \n");
  transposeMatrix (4, 5, firstMatrix, secondMatrix);

  printf ("Again, the First Matrix: \n");
  print_firstMatrix (4, 5, firstMatrix);

  printf ("\nThe new Second Matrix: \n");
  print_secondMatrix (5, 4, secondMatrix);

  return 0;
}

// transpose matrix function
void transposeMatrix (int nRows, int nCols,
                int firstMatrix[nRows][nCols], int secondMatrix[nRows][nCols])
{
  int row, column;
  for (row = 0; row < nRows; row++)
    for (column = 0; column < nCols; column++)
      secondMatrix[column][row] = firstMatrix[row][column];
}

// print first matrix funtion
void print_firstMatrix (int nRows, int nCols, int array[nRows][nCols])
{
  int row, column;
  for (row = 0; row < nRows; row++) {
    for (column = 0; column < nCols; column++)
      printf ("%3d", array[row][column]);
    printf ("\n");
  }
}

// print second matrix funtion
void print_secondMatrix (int nRows, int nCols, int array[nCols][nRows])
{
  int row, column;
  for (row = 0; row < nRows; row++) {
    for (column = 0; column < nCols; column++)
      printf ("%3d", array[row][column]);
    printf ("\n");
  }
}
