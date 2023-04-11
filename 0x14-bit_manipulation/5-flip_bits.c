#include "main.h"

/**
 * flip_bits -  returns the number of bits to flip
 * to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	m = n ^ m;
	n = 0;

	while (m)
	{
		n += m & 1;
		m >>= 1;
	}

	return (n);
}
