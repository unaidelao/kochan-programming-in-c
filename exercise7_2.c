/*
 * Exercise 7.2 Kochan - Programming in C
 * 
 * Modify Program 7.1 so that the elements of the array
 * values are initially set to 0. Use a for loop to
 * perform the initialization.
 */

#include <stdio.h>

int main (void)
{
    int values[10];
    int index;
    
    for (int j = 0; j < 10; ++j)
        values[j] = 0;
        
    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[9] = values[5] / values[10];
    --values[2];
    
    for (index = 0; index < 10; ++index)
        printf("values[%i] = %i\n", index, values[index]);
    
    return 0;
}
