#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
        int i, initial = 0;
        unsigned long int result;

        for (i = 63; i >= 0; i--)
        {
                result = n >> i;

                if (result & 1)
                {
                        _putchar('1');
                        initial++;
                }
                else if (initial)
                        _putchar('0');
        }
        if (!initial)
                _putchar('0');
}
