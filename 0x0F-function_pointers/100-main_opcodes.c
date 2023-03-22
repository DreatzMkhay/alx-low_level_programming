#include <stdio.h>
#include <stdlib.h>

/**
 * main -  Write a program that prints the opcodes of its own main function.
 * allowed to use printf and atoi
 * listing ends with a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 *
 * If the number of argument is not the correct one, print Error,
 * followed by a new line, and exit with the status 1.
 * If the number of bytes is negative, print Error,
 * followed by a new line, and exit with the status 2.
 * Return: Always 0 on Success
 */

int main(int argc, char **argv, char *envp[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

