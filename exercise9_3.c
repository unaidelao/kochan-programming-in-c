/*
 * Exercise 9.3 Kochan - Programming in C
 *
 * Write a function 'elapsed_time' that takes as its arguments two 'time'
 * structures and returns a 'time' structure that represents the elapsed time
 * (in hours, minutes and seconds) between the two times. So the call
 *
 * elapsed_time (time1, time2)
 *
 * where 'time1' represents 3:45:15 and 'time2' represents 9:44:03, should
 * return a 'time' structure that represents 5 hours, 58 minutes and 48
 * seconds. Be careful with times that cross midnight.
 */

#include <stdio.h>

// declaring struct time globally
struct time
{
  int hour;
  int minutes;
  int seconds;
};

// prototypes
struct time elapsed_time (struct time time1, struct time time2);

// main function
int main (void)
{
  struct time time1, time2, time3; // time3 will be time2-time1 struct

  printf ("Enter the first time (hh:mm:ss): ");
  scanf ("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

  printf ("Now, enter the second time (hh:mm:ss): ");
  scanf ("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

  time3 = elapsed_time (time1, time2);

  printf ("The elapsed time is %.2i:%.2i:%.2i\n", time3.hour, time3.minutes,
                                                  time3.seconds);

  return 0;
}

// elapsed_time function
struct time elapsed_time (struct time time1, struct time time2)
{
  int secondsCalc = (time2.hour * 3600 + time2.minutes * 60 + time2.seconds) -
                    (time1.hour * 3600 + time1.minutes * 60 + time1.seconds);

  if (secondsCalc < 0)
    secondsCalc += 24 * 3600;

  struct time calc;

  calc.hour = (secondsCalc / 3600);
  calc.minutes = (secondsCalc % 3600) / 60;
  calc.seconds = (secondsCalc % 3600) % 60;

  return calc;
}
