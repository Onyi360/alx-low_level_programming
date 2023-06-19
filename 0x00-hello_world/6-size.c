#include <stdio.h>

/**
 * main - Entry point "program to print using sizeof() operator".
 * Return: Always 0
 */

int main(void)
{
	char	a	= 'A';
	int	b	= 120;
	float	c	= 123.0f;
	double	d	= 1222.90;
	char	str[]	= "Hello";

	printf("\nSize of a: %d", sizeof(a));
	printf("\nSize of b: %d", sizeof(b));
	printf("\nSize of c: %d", sizeof(c));
	printf("\nSize of d: %d", sizeof(d));
	printf("\nSize of str: %d", sizeof(str));

	return (0);
}
