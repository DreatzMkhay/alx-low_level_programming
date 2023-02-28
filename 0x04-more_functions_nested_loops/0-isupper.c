#include "main.h"

/**
 * isupper -checks for uppercase characters
 *
 * Return: 1 (if success) or 0 (if otherwise)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
