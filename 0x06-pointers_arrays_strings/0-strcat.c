#include "main.h"

/**
 * _strcat - this is a function strcat
 * @dest: first param
 * @src: second param
 * Return: a pointer  to the desstination string @dest.
 */
char *_strcat(char *dest, char *src);
{
	int index = 0, dest_len = 0;

	while (dest[ndex++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
