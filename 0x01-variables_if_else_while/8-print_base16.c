#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase using 3 putchar calls.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;

	for (num = 48; num <= 102; num++)
	{
		if ((num >= 48 && num <= 57) || (num >= 97 && num <= 102))
			putchar(num);
	}
	putchar('\n');

	return (0);
}
