/* Write a program that accepts two integer values typed in by the user.
 * Display the result of dividing the first integer by the second, to
 * three-decimal-place accuracy.
 * Remember to have the program check division by zero.
 */

#include <stdio.h>

int main (void)
{
	int value1, value2;
	
	printf("Type two integers, please:\n");
	scanf("%i %i", &value1, &value2);
	
	if (value2 == 0)
	{
		printf("Division by zero!! Not allowed!!\n");
		return 1;
	}
	else
	{
		printf("Result: %.3f\n", (float)value1 / value2);
	}
	return 0;
}