/* The least common multiple (lcm) of two positive integers u and v is the
 * smallest positive integer that is evenly divisible by both u and v.Thus, the
 * lcm of 15 and 10, written lcm (15, 10), is 30 because 30 is the smallest
 * integer divisible by both 15 and 10.Write a function lcm that takes two
 * integer arguments and returns their lcm.The lcm function should calculate
 * the least common multiple by calling the gcd function from Program 8.6 in
 * accordance with the following identity:
 *              lcm (u, v) = uv / gcd (u, v)     u, v >= 0
 */

#include <stdio.h>

// gcd funtcion
int gcd (int u, int v)
{
	int temp;

	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

// lcd function
int lcm (int u, int v)
{
	if ( u >= 0 && v >= 0 ) {
		return (u * v) / gcd (u, v);
	} else {
		printf ("Called lcm function with negative argument(s)\n");
		return -1;
	}
}

// main function
int main (void)
{
	int result;

	result = lcm (150, 35);
	printf ("The lcm of 150 and 35 is %i\n", result);

	result = lcm (15, 10);
	printf ("The lcm of 15 and 10 is %i\n", result);

	printf ("The lcm of 83 and 240 is %i\n", lcm (83, 240));

	return 0;
}
