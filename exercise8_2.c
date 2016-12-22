/* Modify Program 8.4 so the value of triangularNumber is
 * returned by the function. Then go back to Program 5.5
 * and change that program so that it calls the new version
 * of the calculateTriangularNumber function.
 */

#include <stdio.h>

// function to calculate the nth triangular number

int calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;
    
    for (i = 1; i <= n; ++i)
        triangularNumber += i;
    
    return triangularNumber;
}

int main (void)
{
    printf ("Triangular Number of 10 is: %i\n", calculateTriangularNumber (10));
    printf ("Triangular Number of 20 is: %i\n", calculateTriangularNumber (20));
    printf ("Triangular Number of 50 is: %i\n", calculateTriangularNumber (50));
    
    return 0;
}
