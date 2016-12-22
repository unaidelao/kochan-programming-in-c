/* Write a program to generate and display a table of n and n^2,
   for integer values of n ranging from 1 to 10. Be certain to
   print appropiate column headings                             */

#include <stdio.h>

int main(void)
{
	printf (" n \t\tn^2\n");
	printf ("---\t\t-----\n");
	
	for (int n = 1; n <=10; n++) {
		printf (" %2d\t\t%d\n", n, n*n);
	}
	
	return 0;
}