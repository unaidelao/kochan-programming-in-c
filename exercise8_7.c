/*
 * Exercise 8.7 Kochan - Programming in C
 *
 * Write a function that raises an integer to a positive integer power. Call
 * the function x_to_the_n taking two integer arguments x and n.
 * Have the function return a long int, which represents the results of
 * calculating x to the n.
 */

#include <stdio.h>

// prototype
long int x_to_the_n (int x, int n);

// main
int main (void)
{
    int x, n;
    x = 0;
    n = 0;
    
    printf ("\nLet's raise an integer to a positive integer power.\n");
    printf ("So, enter a number: ");
    scanf ("%d", &x);
    printf ("And now, enter the power: ");
    scanf ("%d", &n);
    
    printf ("\nCalculating...\n");
    printf ("The %ith power of %i is: %li\n.", n, x, x_to_the_n(x, n));
    
    return 0;
}

// x_to_the_n function
long int x_to_the_n (int x, int n)
{
    long int result = 1;
    
    if (n == 0)
        result = 1;
    
    else {
        for (int i = 0; i < n; i++) {
        result *= x;
        }
    }
    
    return result;
}





