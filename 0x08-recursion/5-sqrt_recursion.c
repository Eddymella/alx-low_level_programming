#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number.
 * @n: number to find sbrt of.
 *
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
