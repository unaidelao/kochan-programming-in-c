/*
 * Exercise 8.4 Kochan - Programming in C
 *
 * Modify Program 8.8 so that the value of guess is printed each time through
 * the while loop. Notice how quickly the value of guess converges to the
 * square root. What conclusions can you reach about the number of iterations
 * through the loop, the number whoses square root is being calculated, and the
 * value of the initial guess?
 */

#include <stdio.h>

// Function to calculate the absolute value of a number

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    
    return (x);
}

// Function to compute the square

float squareRoot (float x)
{
    const float epsilon = .00001;
    float       guess   = 1.0;
    
    while (absoluteValue (guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
        printf ("Guess value: %f\n", guess);
    }    
    
    return guess;
}

int main (void)
{
    printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
    printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
    printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));
    
    return 0;
}
