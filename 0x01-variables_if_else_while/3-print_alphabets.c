#include <stdio.h>

/**
 * main - Prints upper and lower case alphabet
 * Return: Always (success)
 *
 */

int main(void)

{

	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
