#include "holberton.h"

/**
 * modulus - modulus
 * @c: input
 * Return: modulus
 */
double modulus(complex c)
{
	return(sqrt((c.re * c.re) + (c.im * c.im)));
}
