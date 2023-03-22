#include <stdio.h>
#include "3-calc.h"

/**
 * main - contain main function only.
 * argc will be the number of strings pointed to by argv.
 * to use atoi to convert arguments to int.
 *
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", func_ptr(a, b));
	return (0);
}
