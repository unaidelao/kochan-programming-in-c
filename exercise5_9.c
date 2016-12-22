/* Rewrite program 5.2 replacing the for statemet by equivalent while
   statement. Run each program to verify that both versions are identical */

#include <stdio.h>

int main (void)
{
	int n, triangularNumber;
	
	triangularNumber = 0;
	
	n = 1;
	while ( n <= 200) {
		triangularNumber += n;
		++n;
	}
	
	printf ("The 200th triangular number is %i\n", triangularNumber);
	
	return 0;
}