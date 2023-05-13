#include "main.h"

/**
 * prompt: Entry point
 *
 * Description: To allow user to enter a command
 * File Author: E Donginena
 * @buffer: pointer to a buffer with the command
 *
 * Return: characters
 */
int prompt(char **buffer)
{
	ssize_t characters = 0;
	size_t n = 0;

	printf("(cisfun$) ");
	characters = getline(buffer, &n, stdin);

	return (characters);
}
