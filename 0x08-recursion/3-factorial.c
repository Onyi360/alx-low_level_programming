#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number factorial to be calculated
 *
 * Return: integer value.
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n <= 1)
	return (1);

	return (n * factorial(n - 1));
}
