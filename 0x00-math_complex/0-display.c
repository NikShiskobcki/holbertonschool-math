#include "holberton.h"

/**
 * display_complex_number - displays complex number
 *  @c: input
 */
void display_complex_number(complex c)
{
if (c.re == 0 && c.im == 0)
	printf("0\n");
else
if (c.re != 0)
	{
		printf("%g", c.re);
		if (c.im > 1)
			printf(" + %gi\n", c.im);
		else 
			if (c.im == 1)
				printf(" + i\n");
			else
				if (c.im < 0)
					{
						c.im = -c.im;
						if (c.im == 1)
							printf(" - i\n");
						else
							printf(" - %gi", c.im);
					}
				else
					if (c.im == 0)
						printf("\n");
	}
else
	if (c.re == 0)
	{
		if (c.im > 1)
			printf(" + %gi\n", c.im);
		else
			if (c.im == 1)
				printf(" + i\n");
		        else
				if (c.im < 0)
				{
					c.im = -c.im;
					if (c.im == 1)
						printf(" - i\n");
					else
						printf(" - %gi", c.im);
				}
	}	
		
	






}

