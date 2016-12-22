/* Exercise 6, chapter 3, "Programming in C" Kochan
 * "What output might you expect from the following program"
 */

#include <stdio.h>

int main(void)
{
	int answer, result;
	
	answer = 100;
	result = answer - 10;
	printf("The result is %i\n", result + 5);
	
	return 0;
}