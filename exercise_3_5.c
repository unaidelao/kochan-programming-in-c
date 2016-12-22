/* Exercise 5, chapter 3,"Programming in C" Kochan
 * "Identify the syntactic errors in the following program.
 * Then type in and run the corrected program to ensure you have correctly
 * identified all the mistakes."
 */

#include <stdio.h>

int main(void)
{
	//Declare varible
	int sum;
	
	//Compute result
	sum = 25 + 37 - 19;
	
	//Display result
	printf("The answer is %i\n", sum);
	
	return 0;
}