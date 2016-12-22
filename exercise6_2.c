/* Write a program that asks the user to type in two integer values
 * at the terminal. Test these two numbers to determine if the first
 * is evenly divisible by the second, and display an appropiate
 * message at the terminal.
 */

#include <stdio.h>

int main (void)
{
	int value1, value2;
	
	printf ("Type in two integers:\n");
	scanf ("%i %i", &value1, &value2);
	
	if ((value1 % value2) == 0)
		printf ("%i is evenly divisible by %i", value1, value2);
	else
		printf ("%i is NOT evenly divisible by %i", value1, value2);
	
	return 0;
}