#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int l, m, n, size;
	char *arg;

	size = 0;
	n = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;
	while (l < ac)
	{
		m = 0;
		while (av[l][m])
		{
			size++;
			m++;
		}
		size++;
		l++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	l = 0;
	while (l < ac)
	{
		m = 0;
		while (av[l][m])
		{
			arg[n] = av[l][m];
			m++;
			n++;
		}
		arg[n] = '\n';
		n++;
		l++;
	}
	arg[n] = '\0';
	return (arg);
}
