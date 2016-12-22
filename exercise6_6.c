/* Write a program that takes an integer keyed in from the terminal and
 * extracts and displays each digit of the integer in English. So, if
 * the user types in 932, the program should display "nine three two".
 * Remember to display "zero" if the user types in just 0. (Hard one!).
 */
 
#include <stdio.h>

int main (void)
{
    int number, temp, reversed_number;
    
    printf ("Type in a number, please:\n");
    scanf ("%i", &number);

	/*Dando la vuelta a "int number" porque el do-while de después
	 * va a imprimir el texto de derecha a izquierda... de no ser
	 * por este primer do-while, saldría el texto al revés.
	 */
	do
	{
		reversed_number = (reversed_number * 10) + (number % 10);
		number = number / 10;
	} while ( number != 0 );
	
	do
	{
		temp = reversed_number % 10;
		switch (temp)
		{
			case 0:
				printf ("zero ");
				break;
			case 1:
				printf ("one ");
				break;
			case 2:
				printf ("two ");
				break;
			case 3:
				printf ("three ");
				break;
			case 4:
				printf ("four ");
				break;
			case 5:
				printf ("five ");
				break;
			case 6:
				printf ("six ");
				break;
			case 7:
				printf ("seven ");
				break;
			case 8:
				printf ("eight ");
				break;
			case 9:
				printf ("nine ");
				break;
			default:
				printf ("invalid");
				break;
		} 
		reversed_number /= 10;
		
	} while (reversed_number != 0);
	
    printf ("\n");
    return 0;
}