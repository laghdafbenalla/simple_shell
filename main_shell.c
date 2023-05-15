#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	char *buffer = {NULL};
	ssize_t results = 1;
	char **argfill = NULL;
	char *result = "exit";
	int i = 0;

	while (results)
	{
		results = prompt(&buffer);
		if (results == -1)
		{
			free(buffer);
			exit(100);
		}
	}

	free(buffer);
	return (0);
}
	
	argfill = fillarguments(buff);
		while (result[i])
		{
			if (result[i] != av[0][i])
				break;
			if (i == 3)
				exit(1);
			i++;
		}
		processus(argfill, buff);

		free(argfill);
