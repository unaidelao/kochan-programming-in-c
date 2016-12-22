/*
 * Exercise 9.4 Kochan - Programming in C
 *
 * If you take the value of N as computed in exercise 2, subtract 621,049 from
 * it, and then take that result modulo 7, you get a number from 0 to 6 that
 * represents the day of the week (Sunday through Saturday, respectively) on
 * which the particular day falls. For example, the value of N computed for
 * August 8, 2004, is 732,239 as derived previously. 732,239 – 621,049 gives
 * 111,190, and 111,190 % 7 gives 2, indicating that this date falls on a
 * Tuesday. Use the functions developed in the previous exercise to develop a
 * program that displays the day of the week on which a particular date falls.
 * Make certain that the program displays the day of the week in English
 * (such as “Monday”).
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
void printDayName (int x);


// main function

int main (void)
{
	struct date date1, date2;
	int n1, n2; // n1 for date1, n2 for date2

	printf ("Enter the first date (mm dd yyyy): ");
	scanf ("%i%i%i", &date1.month, &date1.day, &date1.year);

	printf ("Enter the second date (mm dd yyyy): ");
	scanf ("%i%i%i", &date2.month, &date2.day, &date2.year);

	n1 = elapsedDays (date1);
	n2 = elapsedDays (date2);

  printf ("The elapsed days between ");
  printDayName(n1);
  printf(" %i/%i/%i and ", date1.month, date1.day, date1.year);
  printDayName(n2);
  printf(" %i/%i/%i is %i days.\n ", date2.month, date2.day, date2.year, n2 - n1);

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

// function to print the day's name
void printDayName (int x)
{
  int day = (( ( x - 621049) % 7));

  switch (day)
  {
	  case 0:
		  printf ("Sunday");
      break;
    case 1:
      printf ("Monday");
      break;
    case 2:
      printf ("Tuesday");
      break;
    case 3:
		  printf ("Wednesday");
      break;
    case 4:
		  printf ("Thursday");
      break;
    case 5:
		  printf ("Friday");
      break;
    case 6:
		  printf ("Saturday");
      break;
  }
}
