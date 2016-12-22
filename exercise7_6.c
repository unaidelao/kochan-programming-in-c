/*
 * Exercise 7.6 Kochan - Programming in C
 * 
 * You don’t need to use an array to generate Fibonacci numbers.You can simply 
 * use three variables: two to store the previous two Fibonacci numbers and one
 * to store the current one. Rewrite Program 7.3 so that arrays are not used. 
 * Because you’re no longer using an array, you need to display each Fibonacci 
 * number as you generate it.
 */

#include <stdio.h>

int main (void)
{
    int x = 0;
    int y = 1;
    int z;
    
    printf ("%d  %d  ", x, y);
    
    for (int i = 2; i < 15; i++)
    {
        z = x + y;
        printf ("%d  ", z);
        x = y;
        y = z;
    }
    
    printf ("\n");
    
    return 0;
}
