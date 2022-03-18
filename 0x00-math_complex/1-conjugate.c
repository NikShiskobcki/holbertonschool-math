#include "holberton.h"

/**
 *  conjugate - prints conjugate
 * @c: input
 * Return: c
 */
complex conjugate(complex c)
{
	c.im = c.im * (-1);
	return (c);
}
