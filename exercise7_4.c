/*
 * Exercise 7.4 Kochan - Programming in C
 *
 * Write a program that calculates the average of an array of 10 floating-point
 * values.
 */

#include <stdio.h>

int main (void)
{
    float array[10];
    float array_sum = 0;
    
    // initialize all the array to 0, just for sanity check
    for (int i = 0; i < 10; i++)
        array[i] = 0;
    
    printf ("Please, input 10 floating points:\n");
    
    // sacar por pantalla un #1, #2... y scanf para cada uno hasta #10 del array 
    for (int j = 0; j < 10; j++)
    {
        printf ("#%i: ", j + 1);
        scanf ("%f", &array[j]);
        array_sum += array[j];
    }
    
    float average = array_sum / 10;
    
    printf ("\nThe average of input data is: %.2f\n", average);
    
    return 0;
}
