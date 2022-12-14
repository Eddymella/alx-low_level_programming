#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array of size and assign char
 * @size: size of array
 * @c: char to assign
 * Description: creates array of size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	/* check if malloc was successful*/

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
