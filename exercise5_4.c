/* The factorial of an integer n, written n!, is the product of the consecutive integers
1 through n. For example, 5 factorial is calculated as
5! = 5 x 4 x 3 x 2 x 1 = 120
Write a program to generate and print a table of the first 10 factorials.*/

#include <stdio.h>

int main(void)
{
	printf ("\n Factorial numbers\n");
	printf (" n \t\t n!\n");
	printf ("---\t\t----\n");
	
	for (int n = 1, f = 1; n <= 10; n++)
	{
		f *= n;
		printf (" %2d\t\t%d\n", n, f);
	}
	
	return 0;
}