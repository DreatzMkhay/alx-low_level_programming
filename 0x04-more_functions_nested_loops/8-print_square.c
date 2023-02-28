#include "main.h"

 /**
 * a function that prints a square, where size is the size of the square
 * followed by a new line
 * Use the character # to print the square
 *
 * Return: If size is 0 or less, the function should print only a new line
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{


			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
