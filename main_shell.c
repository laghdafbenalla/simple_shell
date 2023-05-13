#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	char *av[] = {NULL};
	char *buffer = {NULL};
	ssize_t result = 1;

	while (result)
	{
		result = prompt(&buffer);
		if (result == -1)
		{
			free(buffer);
			exit(100);
		}
	}

	free(buffer);
	return (0);
}
