#include "main.h"

/**
 * processus - create a processus with the command store in the buffer
 * @buff: buffer
 * @argv: array of arguments
 * @characters_number: number of characters
 *
 * Return: void
 */

void processus(char *buff, char **argv, ssize_t characters_number)
{
	pid_t id;
	int status;

	argv[0] = buff;
	if (argv[0])
		*(argv + 0 + characters_number - 1) = '\0';
	argv[1] = NULL;
	id = fork();
	if (id == -1)
	{
		free(buf);
		exit(99);
	}
	if (id != 0)
		wait(&status);
	else if ((execve(argv[0], argv, NULL)) == -1)
	{
		free(buf);
		exit(98);
	}
}
