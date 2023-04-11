#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function converts a binary number to an unsigned int
 * @b: char string
 *
 * Return: result converted decimal number or 0 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	while (b && *b)
	{
		if (*b == '0' || *b == '1')
			decimal = ((decimal << 1) | (*b++ - '0'));
		else
			return (0);
	}

	return (decimal);
}
