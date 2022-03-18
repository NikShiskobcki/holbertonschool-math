#include "holberton.h"

/**
 * display_complex_number - displays complex number
 *  @c: input
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
		printf("%gi\n", c.im);
	else
		if (c.im == 0)
			printf("%g\n", c.re);
		else
			printf("%g + %gi\n", c.re, c.im);
}

