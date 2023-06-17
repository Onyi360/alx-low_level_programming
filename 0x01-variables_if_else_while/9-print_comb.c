#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */

int main(void)
{

	int y;

	for (y = '0'; y <= '9'; y++)
	{
	putchar(y);
	if (y != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
