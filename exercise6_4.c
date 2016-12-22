/* Write a program that acts as a simple "printing" calculator.
 * The program should allow the user to type expressions of the
 * form  "number   operator"
 */
 
#include <stdio.h>

int main (void)
{
	float result = 0;
	float value;
	char operator;
	
	printf("Begin calculations...\n");
	
	while (operator != 'e' || operator != 'E')
	{
		scanf("%f %c", &value, &operator);
		
		switch (operator)
		{
			case 'S':
			case 's':
				printf("%f\n", value);
				result = value;
				break;
			case '+':
				printf("%f\n", result + value);
				result += value;
				break;
			case '-':
				printf("%f\n", result - value);
				result -= value;
				break;
			case '*':
			case 'X':
			case 'x':
				printf("%f\n", result * value);
				result *= value;
				break;
			case '/':
				if (value == 0)
				{
					printf("Division by zero not allowed!!\n");
				}
				else
				{
					printf("%f\n", result / value);
					result /= value;
					break;
				}
			case 'E':
			case 'e':
				printf("%f\n", result);
				printf("End of calculations.");
				return 0;
			default:
				printf("Invalid operator character!!\n");
				break;
		}
	}
	
	return 0;
}