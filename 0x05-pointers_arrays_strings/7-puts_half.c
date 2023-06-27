#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	j++;

	k = j / 2;
	if (j % 2 == 1)
	k++;

	while (k < j)
	{
	putchar(str[k]);
	k++;
	}
	putchar('\n');
}
