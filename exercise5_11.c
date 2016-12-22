/* Write a program that calculates the sum of the digits of an integer. For example,
the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.The program
should accept any arbitrary integer typed in by the user. */

#include <stdio.h>

int main (void)
{
	int number, temp, digit, result = 0;
	
	printf ("Enter an integer, please: "),
	scanf ("%i", &number);
	
	temp = number;
	
	while (number > 0) {
		digit = number % 10;
		result = result + digit;
		number /= 10;
		}
	
	printf ("\nGiven number = %i\n", temp);
	printf ("Sum of the digits %i = %i\n", temp, result);
	
	return 0;
}

