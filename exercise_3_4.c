/* Exercise 4, chapter 3, "Programming in C" Kochan
 * "Write a program that substracts the value 15 from 87
 * and displays the result, together with an appropiate message
 * at the terminal"
 */

#include <stdio.h>

int main(void)
{
	//Declare and asign variables
	int value1 = 87;
	int value2 = 15;
	int result = value1 - value2;
	
	//Display the result with a message
	printf("The result from substracting %i from %i is %i\n", value1, value2, result);
	
	return 0;
}