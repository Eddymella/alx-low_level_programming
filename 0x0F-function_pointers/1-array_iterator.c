#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executrs function given as param
 * @array: size of array
 * @size: function pointer
 * @action: a pointer to the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
