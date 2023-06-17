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
	char lowr;

	for (y = '0'; y <= '9'; y++)
	putchar(y);

	for (lowr = 'a'; lowr <= 'f'; lowr++)
	putchar(lowr);
	putchar('\n');

	return (0);
}
