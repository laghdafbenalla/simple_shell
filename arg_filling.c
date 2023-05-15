#include "main.h"

	int _strlen(char *str)
{
    int len = 0;

    while (*str != '\0')
    {
        len++;
        str++;
    }

    return len;
}
	int number_of_word(char *str)
{
	int count = 0;
	int i = 0;

		while (str[i] != '\0') 
	{
		if (str[i] == ' ') 
		{
			count++;
		}
			i++;
    	}

    return count + 1;
}
/**
 * argument_filling - divide array with
 * @buff : buffer with the string
 *
 * Return: array of words
 */
char **argument_filling(char *buff)
{
        char *token;
        char **arr = NULL;
                int breadth;
                int i = 0;
arr = malloc(sizeof(char *) * (number_of_word(buff) + 1));
	if (arr == NULL)
		exit(98);

	token = strtok(buff, " ");

	while (token)
	{
		arr[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	breadth = _strlen(arr[i - 1]);
	arr[i - 1][breadth - 1] = '\0';
	arr[i] = NULL;
	return (arr);
}
