#include "main.h"

/**
 * _isdigit - Check for digits
 * @c: The digit to be checked
 * Return: 1 for digit 0 for any else
 */

int _isdigit(int c)

{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
