/*
 * Exercise 9.2 Kochan - Programming in C
 *
 * Write a program that permits the user to type in two dates and then
 * calculates the number of elapsed days between the two dates.Try to structure
 * the program logically into separate functions. For example, you should have
 * a function that accepts as an argument a date structure and returns the
 * value of N computed as shown previously.This function can then be called
 * twice, once for each date, and the difference taken to determine the number
 * of elapsed days.
 */

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

// prototypes

int elapsedDays (struct date d);


// main function

int main (void)
{
	struct date date1, date2;
	int n1, n2; // n1 for date1, n2 for date2

	printf ("Enter the first date (mm dd yyyy): ");
	scanf ("%i%i%i", &date1.month, &date1.day, &date1.year);

	printf ("\nEnter the second date (mm dd yyyy): ");
	scanf ("%i%i%i", &date2.month, &date2.day, &date2.year);

	n1 = elapsedDays (date1);
	n2 = elapsedDays (date2);

	printf ("\nThe elapsed days between %i/%i/%i and %i/%i/%i is %i days.\n",
		date1.month, date1.day, date1.year, date2.month, date2.day,
		date2.year, n2 - n1);
	return 0;
}

// function to calculate elapsed days

int elapsedDays (struct date d)
{
	/* n is the elapsed time integer, as follows:
	 * N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
	 *
	 * Where,
	 * f(year, month) = year - 1       if month <=2
	                    year           otherwise

	   g(month) = month + 13           if month <=2
	              month + 1            otherwise
	 */
	int n, f, g;

	if (d.month <= 2) {
		f = d.year - 1;
		g = d.month + 13;
	}
	else {
		f = d.year;
		g = d.month + 1;
	}

	n = (1461 * f) / 4 + (153 * g) / 5 + d.day;

	return n;
}
