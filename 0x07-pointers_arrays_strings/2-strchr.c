#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @c: pointer to the character
 * @s: the string
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i])
		i++;
	}
	return (NULL)
}


